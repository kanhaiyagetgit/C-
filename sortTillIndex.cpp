#include<iostream>
using namespace std;

int findUnOrdered(int a[],int y){
    int min=a[0];
    for(int i=0;i<y;i++)
    if(a[i]>min && a[i]>a[i+1]){
        return i+1;
    }
}

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void arrange(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]>a[n])
        swap(&a[i],&a[n]);
    }
    return;
}

int main(){
    int a[]={2,4,5,6,1,3};
    int y = sizeof(a)/sizeof(a[0]);
    int x= findUnOrdered(a,y);
    arrange(a,x);
    for(auto x:a)
    cout<<x<<" ";
}