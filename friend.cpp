#include<iostream>
using namespace std;

class B;
class A{
    int a=5;
    friend B;
    };

class B{
    public:
    void showA(A a){
        cout<<a.a;
    }
};

int main(){
    A a;
    B b;
    b.showA(a);
}