#include<iostream>
using namespace std;

class A{
    int r;
    public: 
    A(int x) : r(x) {}
    void show(){
        cout<<r<<endl;
    }
    void fun(){
        r=5;
    }
};

int main(){
    A a(3);
    a.show();
    a.fun();
    a.show();
}