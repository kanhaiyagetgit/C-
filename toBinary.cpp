#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void toBinary(int n){
    if(n==1 || n==0)
    {
    v.push_back(n);
    return;
    }
    int a=n%2;
    toBinary(n/2);
    v.push_back(a);
}

int main(){
    cout<<"Enter no"<<endl;
    int n;
    cin>>n;
    toBinary(n);
    for(int i=0;i<v.size();i++)
    cout<<v[i];
}