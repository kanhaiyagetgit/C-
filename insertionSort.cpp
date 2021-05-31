#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void insertionsort(int a[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main()
{
    int a[10]{10,9,8,7,6,5,4,3,2,1};
    insertionsort(a,sizeof(a)/sizeof(a[0]));
    for(auto x:a)
    cout<<x<<" ";
}