#include<iostream>
#include<type_traits>
#include<string>
using namespace std;
template<class T>
auto length(T const& value)
{
    if constexpr(is_integral<T>::value)// this if constexpr is ran only when given condition returns true and discards the else part // is_integral types are short,long,int,char,signed,unsigned but not float or double or string
    {
        return value;
    }
    else
    {
        return value.length();
    }
}
int main()
{
    int n{3};
    string s{"kanhaiya"};
    cout<<length(n)<<endl;
    cout<<length(s)<<endl;
}