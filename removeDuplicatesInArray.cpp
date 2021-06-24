#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int a[],int x){
    set<int> s;
    for(int i=0;i<x;i++){
        s.insert(a[i]);
    }
    for(auto x:s)
    cout<<x<<" ";
}

int main(){
    int a[]={2,2,3,5,5,8,7,8,7,3};
    int x=sizeof(a)/sizeof(a[0]);
    removeDuplicates(a,x);
}