#include <iostream>
using namespace std;
int main()
{  
   int arr[]={1,2,3,4,5,8};
    //for (auto i:arr) Can also use call by reference
    for (const auto & i:arr)
    cout <<i<<"\t";
    return 0;
}