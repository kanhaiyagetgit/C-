#include <iostream>
#include<memory>
using namespace std;
int main()
{
    //make_unique is a better form of new keyword which provides more memory
    //unique_ptr does not need to be freed, its memory occupied is explicitly deleted
    auto p=make_unique<int []> (100);
}