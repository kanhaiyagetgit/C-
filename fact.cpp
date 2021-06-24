#include<iostream>
using namespace std;


int fact(int n){
	int facto[n]={0};
	facto[0]=1;
	for(int i=1;i<=n;i++)
	facto[i]=i*facto[i-1];
	return facto[n];
}

int main(){
	cout<<fact(10);
}