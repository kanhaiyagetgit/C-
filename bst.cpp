#include <iostream>
using namespace std;

class bst
{
    public:
    int value;
    bst *right,*left;
bst *createNode(int data)
{
bst *node= new bst();
node->value=data;
node->right=NULL;
node->left=NULL;
return node;
}
void insert(bst *root,int data)
{
    if(data>root->value && root->left==NULL)
    {
        bst *node=createNode(data);
        root->left=node;
    }
    if(data<root->value && root->right==NULL)
    {
        bst *node=createNode(data);
        root->right=node;
    }

    if(data>root->value && root->left!=NULL)
    {
        root=root->left;
        insert(root,data);
    }
    if(data<root->value && root->right!=NULL)
    {
        root=root->right;
        insert(root,data);
    }
}
void secondLargest(bst *root)
{   
    if(root->left->left!=NULL)
    {
        root=root->left;
        secondLargest(root);
    }
    if(root->left->left==NULL && root->left->right==NULL)
    {
        cout<<"Second largest is "<<root->value;
    }
    if(root->left->left==NULL && root->left->right!=NULL)
    {
        cout<<"Second largest is "<<root->left->right->value;
    }
}
};

int main()
{
    int x=0;
    cout<<"Press 1 to create root node"<<endl;
    cout<<"Press 2 to insert node"<<endl;
    cout<<"Press 3 to get second largest node"<<endl;
    cout<<"Press 4 to exit"<<endl;
    bst obj;
    bst *nodeObj;
    int data;
    while(1)
    {
        cout<<"Enter choice";
        cin>>x;
    switch(x)
    {
        case 1:
            cout<<"Enter a value"<<endl;
            cin>>data;
            nodeObj=obj.createNode(data);
            break;

        case 2:
            cout<<"Enter a value"<<endl;
            cin>>data;
            obj.insert(nodeObj,data);
            break;
        case 3:
            obj.secondLargest(nodeObj);
            break;
        case 4:
            exit(0);  
        default:
            cout<<"Enter correct option"<<endl;
            break;
    }
    }
    return 0;
}