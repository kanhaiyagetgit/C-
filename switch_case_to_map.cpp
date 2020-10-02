#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    int x;
    cout<<"Enter value of legs u have"<<endl;
    cin>>x;
    /*
    switch (x)
    {
    case 1:
    cout<<"u r an alien"<<endl;
    break;
    case 2:
    cout<<"u r a human"<<endl;
    break;
    case 4:
    cout<<"u r an animal"<<endl;
    break;
    default:
    cout<<"wtf";
    }*/
    map <int,string> M{
        {1,"u r an alien" },
        {2,"u r a human" },
        {3,"u r an animal" }
    };
    map <int,string>::iterator i = M.find(x);
    if(i==M.end())
    cout<<"wtf";
    else
    cout<<M.at(x);
}