#include<iostream>
#include"myspace.h"
using namespace std;
using namespace myspace;

void myspace::print()
{
    cout<<"Printing namespace function";
}
int main()
{
    A a;
    a.sayHello();
    print();
}