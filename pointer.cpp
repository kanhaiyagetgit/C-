#include<iostream>
using namespace std;
int main()
{
static int arr[]={0,1,2,3,4};
int *p[]={arr,arr+1,arr+2,arr+3,arr+4};
int **ptr=p;
cout<<arr<<" and "<<**ptr<<endl;
ptr++;
*ptr++;
*++ptr;
++*ptr;
cout<<ptr<<" and "<<p<<" and "<<ptr-p;
}