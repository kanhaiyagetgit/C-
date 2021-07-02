#include<iostream>
using namespace std;

class n{
    public:
    int data;
    n *next;
};

n *create(int value){
    n *newNode=new n();
    newNode->data=value;
    newNode->next=NULL;
    return newNode;
} 

void insert(n *head,int data){
    if(!head)
    cout<<"List is empty"<<endl;
    n *temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    if(temp->next==NULL)
    temp->next=create(data);
}
//Whenever u need to update head pointer use **head as a parameter
void insertAtBeginning(n **head,int a){
    n *begNode=create(a);
    begNode->next=*head;
    *head=begNode;
}

void deleteNode(n **head,int a){
    if(!head){
    cout<<"List is empty";
    return;
    }
    n *p= *head;
    //delete head if head is not the only element
    if(p->data==a && p->next!=NULL){
        *head=p->next;
        delete p;
        p=NULL;
        return;
    }
    if(p->data==a && p->next==NULL){
        cout<<"Cannot delete alone standing head as list cannot be empty";
        return;
    }
    while(p->next!=NULL && p->next->data!=a)
	p=p->next;
	if(p->next==NULL){
	cout<<"Value not found";
    return;
    }
    //Here p is pointing to the node before the one to be deleted
    n *temp=p->next;
	p->next=p->next->next;
	delete temp;
    temp=NULL;
}

void printNormal(n *head){
    if(!head)
    return;
    cout<<head->data<<" ";
    printNormal(head->next);
}

void printReverse(n *head){
    if(!head)
    return;
    printReverse(head->next);
    cout<<head->data<<" ";
}

int main(){
    n *head=create(1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insertAtBeginning(&head,0);
    printNormal(head);
    printReverse(head);
    cout<<endl;
    printNormal(head);
    cout<<endl;
    deleteNode(&head,1);
    printNormal(head);
}