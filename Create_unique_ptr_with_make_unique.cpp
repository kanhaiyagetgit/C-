#include <iostream>
#include<memory>
using namespace std;
class X
{
    int a{5};
    public:
    X()
    {
        cout<<"This is constructor\n";
    }
    ~X()
    {
        cout<<"This is destructor\n";
    }
    void Hello()
    {
        cout<<"Say Hello : Value of a is "<<a<<"\n";
    }
};
int main()
{
    //make_unique is a better form of new keyword which provides more memory
    //unique_ptr does not need to be freed, its memory occupied is explicitly deleted
    auto p=make_unique<int []> (100);
    auto pX=make_unique<X>();
    pX->Hello();
}