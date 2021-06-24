#include<bits/stdc++.h>
using namespace std;

int *count0s(int a[],int x){
    int *p,*q;
    p=a;
    q=a+(x-1);
    while(p<q){
     if(*p==1 && *q==0)
     {
         int temp;
         temp=*p;
         *p=*q;
         *q=temp;
     }
     if(*p==0)
     p++;
     if(*q==1)
     q--;
    }
    return a;
}

int main(){
    int arr[]={1,1,1,1,1,1,1,1,0,0,0,0,0};
    int x=sizeof(arr)/sizeof(arr[0]);
    int *p=count0s(arr,x);
    for(int i =0;i<x;i++)
    cout<<p[i]<<" ";
}