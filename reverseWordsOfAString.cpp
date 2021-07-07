#include<bits/stdc++.h>
using namespace std;

void reverseWord(char a[],char *p,char *q){
    while(p<q){
        char temp;
        temp=*p;
        *p=*q;
        *q=temp;
        p++;
        q--;
    }
}

int main(){
    char a[]={"kanhaiya is a guy"};
    int x=sizeof(a)/sizeof(a[0]);
    char *z=a+ x-1;
    char *p=a;
    char *q=a;
    while(p<=z){
        while(*p!=' ' && *p!='\0'){
            p++;
        }
        p=p-1;
        reverseWord(a,q,p);
        if(*(p+1)=='\0')
        break;
        q=p+2;
        p=p+2;
    }
    cout<<a;
}