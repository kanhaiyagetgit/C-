#include<iostream>
#include<chrono> 
using namespace std;
using namespace std::chrono; //mandatory
void print(milliseconds ms)
{
    cout<<ms.count()<<"ms\n";
}
int main()
{
    auto x=2s;
    cout<<"x=2s  "; print(x);//here in chrono auto conversion happens
}
