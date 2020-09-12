#include <iostream>
using namespace std;
[[deprecated("bekar fn is bekar use acha fn instead")]]
void bekar()
{
    cout<<"bekar hai ye";
}
void acha()
{
    cout<<"acha hai";
}
int main()
{
    bekar();
}