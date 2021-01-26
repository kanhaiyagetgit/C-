#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int p=1;
    int q=2;
    swap(&p,&q);
    printf("  %d %d  ",p,q);
    return 0;
}