#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void selectionsort(int a[],int n){
    int i,j,min_index;
    for(i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++)
        if(a[j]<a[min_index])
        min_index=j;
        swap(&a[i],&a[min_index]);
    }
}

int main()
{
    int a[10]{10,9,8,7,6,5,4,3,2,1};
    selectionsort(a,sizeof(a)/sizeof(a[0]));
    for(auto x:a)
    cout<<x<<" ";
}