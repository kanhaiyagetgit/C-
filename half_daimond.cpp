#include<iostream>
using namespace std;

int main()
{
    int x;
    static int flag=0;
    cout<<"Enter a number"<<endl;
    cin>>x;
    int n=1;
    while(n){
        cout<<endl;
        if(n==x)
        flag=1;
        for(int i=1;i<=n;i++)
        cout<<"*";
        if(flag==0 && n<x)
        n++;
        if(flag==1 && n<=x)
        n--;
    }
}