#include<iostream>
using namespace std;

const int x = 3;
const int y = 30;

void swap(char **p,char **q){
    char *temp;
    temp=*p;
    *p=*q;
    *q=temp;
}

int compareFun(char p[y],char q[y]){
    int i=0;
    while(*(p+i)!='\0' && *(q+i)!='\0' && *(p+i)==*(q+i))
    i++;
    if(*(p+i)>*(q+i))
    return -1;
    else return 0;
}

void dictOrder(char a[][y]){
    char *p[x];
    for(int i=0;i<x;i++)
    p[i]=a[i];
    for(int i=0;i<x-1;i++){
    bool swapKaro=false;
    for(int j=i+1;j<x;j++)
    {
        if(compareFun(p[i],p[j])<0){
        swap(&p[i],&p[j]);
        swapKaro=true;
        }
        else continue;
    }
    if(swapKaro==false)
    break;
    }
    for(int i=0;i<x;i++)
    cout<<p[i]<<endl;
}

int main(){
    char a[x][y]={"Ramesh Singh","Rameshkanhaiya Singh","Ramesh Kishansingh"};
    dictOrder(a);
} 