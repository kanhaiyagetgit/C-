#include<bits/stdc++.h>
using namespace std;

int count=0;

int *removeDuplicates(int a[],int n){
    int *p=new int[n];
    unordered_map<int,bool> m;
    for(int i=0;i<n;i++){
        if(m.find(a[i])==m.end()){
            p[i]=a[i];
            ::count++;
        }
        m[a[i]]=true;
    }
    return p;
}

int main(){
    int arr[]={1,2,4,3,3,2,1};
    int x=sizeof(arr)/sizeof(arr[0]);
    int *p=removeDuplicates(arr,x);
    for(int i=0;i<::count;i++)
    cout<<*(p++)<<" ";
}