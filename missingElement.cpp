#include<bits/stdc++.h>
using namespace std;

void missingNo(int arr[],int x){
    int a=arr[0];
    int n=x+1;
    int sum=(n*(2*a+(n-1)))/2;
    int add=0;
    for(int i=0;i<x;i++)
    add=add+arr[i];
    cout<<sum-add;
}

int main(){
    int a[]={2,3,4,6};
    int x=sizeof(a)/sizeof(a[0]);
    missingNo(a,x);
}