#include<iostream>
using namespace std;

class A{
    int i,j;
    public:
    A(){}
    A(int x,int y){
        i=x;
        j=y;
    }
    A operator + (A const &obj){
        A a;
        a.i=i+obj.i;
        a.j=j+obj.j;
        return a;
    }

    void print(){
        cout<<i<<" "<<j;
    }
};

int main(){
    A a(1,2);
    A b(3,4);
    A d(5,6);
    A c=a+b+d;
    c.print();
}