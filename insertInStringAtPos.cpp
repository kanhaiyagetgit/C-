#include <bits/stdc++.h>
using namespace std;

void printString(string s,int i){
    if(i==s.size()+1)
    return;
    string a=s;
    a.insert(i,".");
    cout<<a<<endl;
    i++;
    printString(s,i);
}

int main(){
    string s{"1234"};
    printString(s,0);
}