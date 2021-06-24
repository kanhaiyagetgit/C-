#include<bits/stdc++.h>
using namespace std;

void minSum(int a[],int x){
    if(x==1)
    cout<<a[0];
    return;
    int min=INT_MAX;
    int secondMin = INT_MAX;
    for(int i =0;i<x;i++){
        if(min>a[i])
        min=a[i];
        if(secondMin>a[i] && a[i]!=min)
        secondMin=a[i];
    }
    int c[x-1];
    int j=0;
    for(int i=0;i<x;i++){
        if(a[i]!=min && a[i]!=secondMin){
        c[j]=a[i];
        j++;
        }
    }
    c[j]=min+secondMin;
    minSum(c,x-1);
}

int main(){
    int a[]={4,5,3,8};
    int x=sizeof(a)/sizeof(a[0]);
    minSum(a,x);
}