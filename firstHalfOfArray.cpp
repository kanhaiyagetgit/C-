#include<bits/stdc++.h>
using namespace std;

void recursive(int a[],int n){
    if(n==0){
        cout<<a[n]<<endl;
        return;
    }
    for(int i=0;i<=n;i++)
    cout<<a[i];
    cout<<endl;
    recursive(a,(n-1)/2);
}

int main(){
    int a[]={1,2,3,4,5,6,7,8};
    int x = sizeof(a)/sizeof(a[0]);
    recursive(a,x-1);
}