#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void negativePositive(int a[],int x){
    int *p=a;
    int *q=a + 1;
    while(p<a+x || q<a+x){
        if(*p>0 && *q<0){
        p++;
        q++;
        }
        else if(*p<0 && *q>0){
            p++;
            q++;
        }
        else if(*p>0 && *q>0){
            p=q;
            while(*q>0)
            q++;
            if(*q<0 && q<a+x)
            swap(p,q);
            p=p+1;
            q=p+1;
        }
        else if(*p<0 && *q<0){
            p=q;
            while(*q<0)
            q++;
            if(*q>0 && q<a+x)
            swap(p,q);
            p=p+1;
            q=p+1;
        }
        else
        {
            p++;
            q++;
        }

    }
}

int main(){
    int a[]={-2,-3,-7,-4,-6,2};
    int x=sizeof(a)/sizeof(a[0]);
    negativePositive(a,x);
    for(auto x:a)
    cout<<x<<" ";
}