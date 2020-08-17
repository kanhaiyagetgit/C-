#include<iostream>
using namespace std;
class A
{
int a;
public:
A(int x)
{a=x;}
void set()
{
cout<<a<<endl;
}
};
int main()
{
A *p=new A(5);
p->set();
delete p;
return 0;
}


