#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void bubblesort(int a[],int pass){
    int i=0;
    do{
        for(i=0;i<=pass-1;i++){
            if(a[i]>a[i+1])
            swap(&a[i],&a[i+1]);
        }
    pass--;
    }while(pass>=1);
}

int main()
{
    int a[10]{10,9,8,7,6,5,4,3,2,1};
    bubblesort(a,sizeof(a)/sizeof(a[0]));
    for(auto x:a)
    cout<<x<<" ";
}