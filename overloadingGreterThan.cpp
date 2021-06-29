#include<iostream>
using namespace std;

class F{
    int weight;
    public:
    F(){}
    F(int x){
        weight=x;
    }
    F operator >(F boy){
        F temp;
        if(weight>boy.weight){
            temp.weight=weight;
        }
        else temp.weight=boy.weight;
        return temp;
    }
    
    void print(){
        cout<<weight;
    }
};

int main(){
    F kishan(89);
    F kanhaiya(90);
    F bhari=kanhaiya>kishan;
    bhari.print();
}