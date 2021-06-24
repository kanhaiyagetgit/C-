#include<bits/stdc++.h>
using namespace std;

class A{
    public:
     int x;
     A(int n){
         x=n;
     }
     void show(){
         cout<<x<<endl;
     }

};

int main(){
    unique_ptr<A> p=make_unique<A> (5);
    shared_ptr<A> r=make_shared<A> (6);
    shared_ptr<A> s = r;
    unique_ptr<int> q(new int(3));
    cout<<*q<<endl;
    unique_ptr<A> a(new A(4));
    a->show();
    p->show();
    r->show();
    s->show();
    cout<<r.use_count()<<endl;
    unique_ptr<int[]> arr= make_unique<int[]> (10);
    for(int i=0;i<10;i++)
    arr[i]=i;
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}