#include<bits/stdc++.h>
using namespace std;

void arrayRotate(int a[],int x,int n){
    while(n>0){
        n--;
        int p=a[x-1];
        for(int i=x-1;i>0;i--)
        a[i]=a[i-1];
        a[0]=p;
    }
}

int main(){
    int a[]={1,2,3,4,5,6};
    int x=sizeof(a)/sizeof(a[0]);
    arrayRotate(a,x,3);
    for(auto x:a)
    cout<<x<<" ";
}