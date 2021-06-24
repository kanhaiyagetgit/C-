#include<iostream>
using namespace std;

class A{
    public:
    int *p;
    A(int a){
        p=new int;
        *p=a;
    }
    A(A &a){
        p=new int;
        *p=*(a.p);
    }
    void show(){
        cout<<*p;
    }
    ~A(){
        delete p;
    }
};

int main(){
    A a(5);
    {
    A a1=a;
    }
    a.show();
}