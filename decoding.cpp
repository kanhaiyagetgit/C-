#include<bits/stdc++.h>
using namespace std;

void into(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<(char)(a[i]+64);
    }
    return;
}
void intoTen(int a[],int n){
    int i;
    for(i=0;i<n;i=i+2){
        if(i==n-1){
        cout<<(char)(a[i]+64);
        }
        
        else
        cout<<(char)(a[i]*10+a[i+1]+64);
    }
    return; 
}

void intoOneintoTen(int a[],int n){
    int i;
    for(i=0;i<n-1;i++){
        if(i==0){
        cout<<(char)(a[i]+64);
        }
        else
        cout<<(char)(a[i]*10+a[i+1]+64);
    }
    return; 
}

int main()
{
    int x[]={1,2,3,4};
    int y=sizeof(x)/sizeof(x[0]);
    into(x,y);
    cout<<endl;
    intoTen(x,y);
    cout<<endl;
    intoOneintoTen(x,y);
}