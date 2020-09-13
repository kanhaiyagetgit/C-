#include<iostream>
#include<chrono> //To deal with date and time
using namespace std;
int main()
{
    const char *e="a";
    const char *c="Kanhaiya"; //U have to use const keyword to make it a char array
    const char *d="Kanhaiya is a good guy"; //U have to use const keyword to make it a string
    cout<<e<<"\n"<<c<<"\n"<<d<<"\n";
    auto x="Kanhaiya"; // this is a char pointer
    cout<<typeid(x).name()<<"\n";
    auto y="Kanhaiya"s; // this one is string
    cout<<typeid(y).name()<<"\n";
    auto z=10s; //this one is 10 sec
    cout<<typeid(z).name()<<"\n";
}