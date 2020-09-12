#include <iostream>
using namespace std;
template<class T,class X>
T add(T a,X b)
{
    return a+b;
}
int main()
{
    cout<<add(3.4,5);
    return 0;
}