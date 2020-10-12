#include<iostream>
using namespace std;
int main()
{
    int a[2][2]={1,2,3,4};
    int *p[]={(int *)a,(int *)a+1,(int *)a+2};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        cout<<*(*(p+i)+j)<<" "<<*(*(j+p)+i)<<" "<<*(*(i+p)+j)<<" "<<*(*(p+j)+i)<<endl;
    }
}