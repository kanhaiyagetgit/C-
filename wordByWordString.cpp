#include <bits/stdc++.h>
using namespace std;

int main(){
    string s{"Kanhaiya is a 67668flawsome guy"};
    stringstream s1(s);
    string word;
    string rev;
    while(s1>>word)
    rev=word + " " + rev;
    cout<<rev;
}