#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(int x){
        cout<<x;
    }
};

class B : public A{
    public:
    static int b;
    void show(int y){
        cout<<y;
    }
};

int B::b=4;
int main(){
    A *a=new A;
    a->show(B::b);
}