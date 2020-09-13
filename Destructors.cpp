#include <iostream>
using namespace std;
class A
{
    int a,b;
    public:
    A()
    {
        cout<<"Constructer is called first\n";
    }
    void print()
    {
        cout<<"Just a fn call\n";
    }
    ~A()
    {
        cout<<"Destructor fn is running and it is the last fn called by an object\n";

    }
};
void fun()
{
    A a;
    a.print();
    cout<<"Object is created\n";
    a.print();
}
int main()
{
    fun();
}