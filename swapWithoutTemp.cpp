#include<iostream>
using namespace std;

void swap(int *p,int *q){
    *p=*p^*q;
    *q=*p^*q;
    *p=*p^*q;
}

int main(){
    int a[]={1,2,3,4};
    swap(&a[1],&a[2]);
    for(auto x:a)
    cout<<x<<" ";
}