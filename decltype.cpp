#include<iostream>
using namespace std;

auto fun(int a, float b) ->decltype(a+b){
    return a+b;
}

int main(){
    cout<<fun(2,8.6);
}