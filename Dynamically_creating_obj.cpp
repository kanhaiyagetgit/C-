#include<iostream>
using namespace std;
class A
{
int s;
public:
A()
{
s=6;
cout<<s<<endl;
}
};
class B:public A
{
    public:
    B(int a,int b)
    {
        int c;
        c=a+b;
        cout<<c<<endl;
    }
};
int main()
{
A *pa=new B(5,6);
}
