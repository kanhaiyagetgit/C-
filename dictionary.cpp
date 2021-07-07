#include<bits/stdc++.h>
using namespace std;

vector<string> dictionaryOrder(vector<string> v,int y){
    int x=v.size();
    while(x>0){
        x--;
        for(int i=0;i<v.size()-1;i++)
            if((v[i].compare(0,y,v[i+1],0,y))>0)
            swap(v[i],v[i+1]);
    }
    return v;
}

int main(){
    string r="Ramesh Singh";
    string ka="RameshKanhaiya Singh";
    string ki="Ramesh KishanSingh";
    int y=r.size();
    vector<string> v{r,ka,ki};
    vector<string> dictionaryReady=dictionaryOrder(v,y);
    for(auto x:dictionaryReady)
    cout<<x<<endl;
}