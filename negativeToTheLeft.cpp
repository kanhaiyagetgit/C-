#include<iostream>
using namespace std;

int *negativeToTheLeft(int a[],int *p,int *q){
    int *arr=a;
    while(p<q){
        if(*p>0 && *q<0){
            int temp;
            temp=*p;
            *p=*q;
            *q=temp;
            p++;
            q++;
        }
        else if(*p>0 && *q>0)
        q--;
        else if(*p<0 && *q<0)
        p++;
        else{
            p++;
            q--;
        }
    }
    return arr;
}

int main(){
    int a[]={-4,5,-3,-8};
    int x=sizeof(a)/sizeof(a[0]);
    int *p=negativeToTheLeft(a,a,a+x-1);
    for(int i=0;i<x;i++)
    cout<<*(p++)<<" ";
}