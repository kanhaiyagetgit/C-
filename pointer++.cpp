#include<bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int main()
{
    int *a=new int[10]();
    cout<<a[0]<<endl;
    a[1]=1;
    a++;
    cout<<*a<<endl;
    Point *p=new Point[10]();
    p[0].x=1;
    p[0].y=2;
    p[1].x=3;
    p[1].y=4;
    p++;
    cout<<p->y;
    delete a;
    delete p;
}