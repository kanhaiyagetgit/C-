#include <bits/stdc++.h>
using namespace std;

int main(){
    string s("Kanhaiya hai ye l ");
    while(s.find(" ")!=string::npos)
        s.erase(s.find(" "),1);
    cout<<s;
}