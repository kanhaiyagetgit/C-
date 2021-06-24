#include<iostream>
using namespace std;

void fibo(int a,int b,int count){
    cout<<a<<endl;
    if(count>=5)
    return;
    else 
    return fibo(b,a+b,++count);
}

int main(){
    fibo(0,1,0);
}