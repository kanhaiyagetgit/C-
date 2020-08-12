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
};
int main()
{
A a(5);
return 0;
}
