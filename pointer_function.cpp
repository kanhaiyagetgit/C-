#include<iostream>
using namespace std;
int * add()
{
    static int a=10;
    return &a;
}
int main()
{
    
    int *p=add();
    cout<<*p;
}