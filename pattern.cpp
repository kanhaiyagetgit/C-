#include<iostream>
using namespace std;

void pattern(int n){
      while(n>0){
            cout<<endl;
            cout.width(n);
            static int i=1;
            int j=i;
            while(j>0){
                  cout<<"*";
                  j--;
            }
            i=i+2;
            n--;
      }
}

int main(){
      int x;
    cout<<"Enter size";
    cin>>x;
    pattern(x);
}