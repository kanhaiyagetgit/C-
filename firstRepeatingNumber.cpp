#include<bits/stdc++.h>
using namespace std;

void firstRepeatingNumber(int a[],int x){
    map<int,int> m;
    for(int i=0;i<x;i++){
        if(m.find(a[i])!=m.end())
        m.at(a[i])=m.at(a[i]) +1;
        else m.insert(make_pair(a[i],1));
    }
    for(auto i=m.begin();i!=m.end();i++){
    if(i->second==2)
    cout<<i->first;
    break;
    }
}


int main(){
    int a[]={2,3,3,4,6,2};
    int x=sizeof(a)/sizeof(a[0]);
    firstRepeatingNumber(a,x);
}