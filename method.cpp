#include<iostream>
using namespace std;
int sum(int a,int b)
{
return a+b;
}
int main()
{
int a,b;
cout<<"Enter 2 no's"<<endl;
cin>>a>>b;
int x=sum(a,b);
cout<<x;
return 0;
}
