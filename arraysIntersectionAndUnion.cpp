#include<bits/stdc++.h>
using namespace std;

void findUnionAndIntersection(int a[],int b[],int x,int y){
    unordered_map<int,int> m;
    for(int i=0;i<x;i++){
        if(m.find(a[i])!=m.end())
        m.at(a[i]) = m.at(a[i]) + 1;
        else m.insert(make_pair(a[i],1));
    }
        for(int i=0;i<y;i++){
        if(m.find(b[i])!=m.end())
        m.at(b[i]) = m.at(b[i]) + 1;
        else m.insert(make_pair(b[i],1));
    }
    cout<<"Intersection"<<endl;
    for(auto i=m.begin();i!=m.end();i++){
        if(i->second>1)
        cout<<i->first<<" ";
    }
    cout<<endl;
    cout<<"Union"<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    cout<<i->first<<" ";
}

int main(){
    int a[]={1,2,3};
    int x=sizeof(a)/sizeof(a[0]);
    int b[]={3};
    int y=sizeof(b)/sizeof(b[0]);
    findUnionAndIntersection(a,b,x,y);
}