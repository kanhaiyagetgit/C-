#include<bits/stdc++.h>
using namespace std;

int maxElement(int a[],int n){
    int max=a[0];    
    for(int i=0;i<n;i++)
    if(max<a[i])
    max=a[i];
    return max;                                                                                                                                                                                                                                                                                                                                                                                 
}

void kThLargest(int a[],int n,int k){
    sort(a,a+n);
    cout<<a[k-1]<<endl;
}

int main(){
    int a[]={4,5,3,8};
    int x=sizeof(a)/sizeof(a[0]);
    cout<<*max_element(a,a+x)<<endl;
    cout<<maxElement(a,x)<<endl;    
    kThLargest(a,x,3);                       
}