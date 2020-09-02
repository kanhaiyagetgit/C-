#include<iostream>
using namespace std;
int * add(int a,int b)
{
    int *p;
    int c=0;
    c=a+b;
    p=&c;
    return p;
}
int main()
{
    int x=2,y=3;
    int *p=add(x,y);
    cout<<*p;
    return 0;
}