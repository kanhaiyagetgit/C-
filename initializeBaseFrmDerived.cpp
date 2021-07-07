#include<iostream>
using namespace std;

class A{
    public:
    int i;
    A(){}
    A(int x) : i(x) {}
    void print(){
        cout<<i;
    }
};

class B : public A{
    int j;
    public:
    B(){}
    B(int a,int b) : j(b) {
        this->i=a;
    }
};

int main(){
    B b(4,5);
    b.print();
}