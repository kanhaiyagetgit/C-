#include<iostream>
using namespace std;

int main(){
    cout<<"Lets strt"<<endl;
    try{
        throw 10;
        cout<<"After throw"<<endl;
    }
    catch(int a){
        cout<<"First a "<<a<<endl;
    }
    catch(int b){
        cout<<"First b "<<b<<endl;
    }
    cout<<"end"<<endl;
}