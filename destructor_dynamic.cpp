#include<bits/stdc++.h>
using namespace std;

class Dyno
{
    public:
    int a;
    int *marks = new int[10];
    Dyno(int x)
    {
        a=x;
        cout<<"Constructor";
    }
    ~Dyno()
    {
        cout<<"Destructor";
    }
};

int main()
{
    Dyno *dy = new Dyno(5);
    cout<<dy->a;
    delete dy;
    return 0;
}