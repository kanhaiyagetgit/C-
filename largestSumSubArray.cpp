#include<bits/stdc++.h>
using namespace std;

int sum(int a[],int *p,int *q){
    int sum =0;
    while(p<=q){
        sum = sum+*p;
        p++; 
    }
    return sum;
}

void largestSumSubArray(int a[],int x){
    int *p=a;
    int *q=a+x-1;
    int k,l;
    int sumMax = -50;
    while(p<q){
        if(sum(a,p,q)>sumMax){
        sumMax=sum(a,p,q);
        k=*p;
        l=*q;
        if(*p==*q){
            if(*(p+1)>*(q-1))
                q--;
            else p++;
        }
        else if(*p>*q)
        q--;
        else p++;
        }
        else if(*p>*q)
            q--;
        else if(*p<*q)
        p++;
        else {
            if(*(p+1)>*(q-1))
                q--;
            else p++;
        }
    }
    cout<<"Max sum is "<<sumMax<<endl;
    cout<<"Index are "<<k<<" "<<l;
}

int main(){
    int a[]={2,3,4,-9,-2,1,5,3};
    int x=sizeof(a)/sizeof(a[0]);
    largestSumSubArray(a,x);
}