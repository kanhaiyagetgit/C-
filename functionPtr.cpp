#include <iostream>  
using namespace std;  

int add(int a , int b)  
{  
    return a+b;  
}  
int mul(int a , int b)  
{  
    return a*b;  
}
void printname(char *name)  
{  
    cout<<name<<endl;  
}  
void hey(int a){
    cout<<a;
}
void func(void (*pf)(int))  
{  
    pf(5);  
}  
int main()  
{  
 int (*funcptr)(int,int);
 void (*fptr)(char*);
 funcptr=add;  
 int sum=funcptr(5,5);  
 funcptr=mul;  
 int multiply=funcptr(5,5); 
cout <<sum<<" "<<multiply<<endl;  
fptr=printname;
char s[10]="hey";
fptr(s);
func(hey);
} 