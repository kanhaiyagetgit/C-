#include<bits/stdc++.h>
using namespace std;

void countDuplicates(int a[],int x){
    map<int,int> m;
    for(int i=0;i<x;i++){
        if(m.find(a[i])==m.end())
        m.insert(make_pair(a[i],1));
        else 
        m.at(a[i]) = m.at(a[i]) + 1;
    }
    for(auto it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second;
    cout<<endl;
    }
}

int main(){
    int a[]={2,2,2,5,5,8,3,8,7,3};
    int x=sizeof(a)/sizeof(a[0]);
    countDuplicates(a,x);
}