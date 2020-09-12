#include <iostream>
using namespace std;
template<class T>
T maxval=T(1000);
template<>
double maxval<double> =8.90876;
template<>
char maxval<char> ='Z';

int main()
{
    cout<<"int "<< maxval<int> <<"\n";
    cout<<"double "<< maxval<double> <<"\n";
    cout<<"char "<< maxval<char> <<"\n";
}
