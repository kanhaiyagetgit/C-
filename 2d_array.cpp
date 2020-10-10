#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={1,2,3,4};
    int *p[]={(int *)a,(int *)a+1,(int *)a+2};
    for(auto x : p)
    cout<<*x<<endl;
}