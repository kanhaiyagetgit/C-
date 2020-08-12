#include<iostream>
using namespace std;
class A
{
int s;
public:
A(int x)
{
s=x;
cout<<s<<endl;
}
A(A &m)
{
s=m.s;
cout<<s<<endl;
}
};
int main()
{
A a(5);
A b(a);
return 0;
}
