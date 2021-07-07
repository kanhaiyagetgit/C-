#include<bits/stdc++.h>
using namespace std;

bool sumZero(int a[],int x){
    map<int,int> m;
    int sum=0;
    for(int i=0;i<x;i++){
        sum = sum +a[i];
        if(m.find(sum)!=m.end())
        return true;
        else
        m.insert(make_pair(sum,a[i]));
    }
    return false;
}

int main(){
    int a[]={-2,7,3,-4,0,2};
    int x=sizeof(a)/sizeof(a[0]);
    if(sumZero(a,x))
    cout<<"True";
    else cout<<"False";
}