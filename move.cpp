#include<iostream>
#include<memory>
using namespace std;
int main()
{
    auto p=make_unique<int>(2);//value passsed is 2 just like int x=2
    auto a=[ptr=move(p)]()
    {
        cout<<"Value of pointed memory space is "<<*ptr<<endl;
    };
    a();//Here a is a lambda function
}//move is used to copy pointer p to pointer ptr as unique ptrs are movable but not copyble

