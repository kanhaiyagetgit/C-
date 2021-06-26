#include<stdio.h>
void reverse(char *s){
	char *p,*q;
	p=&s[0];
	q=&s[0];
	while(*q!='\0')
	q++;
    q=q-1;
	while(p<q)
	{
char temp;
temp=*p;
*p=*q;
*q=temp;
p++;
q--;	
}
printf("%s",s);
}

int main(){
    char s[]={"kanhaiya is a good guy"};
    reverse(s);
}