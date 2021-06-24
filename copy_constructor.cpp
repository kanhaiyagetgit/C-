#include<iostream>
using namespace std;
class A
{
int s;
public:
A(int x)
{
s=x;
}
A(const A &a)
{
s=a.s;
cout<<s<<endl;
}

void show(){
    cout<<s;
}

};
int main()
{
A a(5);
A b=a;
b.show();
return 0;
}
