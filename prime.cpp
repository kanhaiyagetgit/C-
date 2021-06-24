#include<iostream>
using namespace std;

bool primeOrNot(int n){
    if(n<=1)
    return false;
    for(int i=2;i<n;i++)
        if(n%i==0)
        return false;
    return true;
}

int main(){
    int x;
    cout<<"Enter no\n";
    cin>>x;
    if(primeOrNot(x))
    cout<<"prime";
    else cout<<"Not prime";
}