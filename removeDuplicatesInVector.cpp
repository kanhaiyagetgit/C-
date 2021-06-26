#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,2,1,3,4,10,4,5,4,8,7,6,7};
    sort(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    auto it=unique(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    v.resize(distance(v.begin(),it));
    cout<<endl;
    for(auto x:v)
    cout<<x<<" ";
}