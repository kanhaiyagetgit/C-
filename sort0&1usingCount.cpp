#include<bits/stdc++.h>
using namespace std;

int *count0s(int a[],int x){
    int a1=0;
    for(int i =0;i<x;i++){
        if(a[i]==0)
        a1++;
    }
    for(int i=0;i<a1;i++)
    a[i]=0;
    for(int i=a1;i<x;i++)
    a[i]=1;
    return a;
}


int main(){
    int arr[]={1,0,0,1,1,0,1,0,0,1,0,1,0};
    int x=sizeof(arr)/sizeof(arr[0]);
    int *p=count0s(arr,x);
    for(int i =0;i<x;i++)
    cout<<p[i]<<" ";
}