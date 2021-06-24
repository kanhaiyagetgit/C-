#include<iostream>
using namespace std;

class A{
    public:
    int a =10;
};

class B : public A
{
    public:
    int b=5;
    B(int b)
    {
        cout<<this->b<<endl;
        cout<<b<<endl;
    }
};
int main(){
    B b(56);
}
