#include<iostream>
using namespace std;
int x;
int *sum(int *p)
{
    for(int i=0;i<x;i++)
    p[i]=p[i]+10;
    return p;
}
int main()
{
    int arr[]={1,2,3,4};
    x=sizeof(arr)/sizeof(arr[0]);
    int *a=sum(arr);
    for(int i=0;i<x;i++)
    cout<<a[i]<<endl;
}