#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map <int,string> M{
        {1,"kishan is good"},
        {2,"kanhaiya as well"},
        {3,"Gudo"}
    };
    M.insert(pair<int,string>(4,"Pyaroo"));
    M.insert(make_pair(5, "Pyaroo"));
    cout<<M[2]<<endl;
    //map <int,string>::iterator i = M.begin();  Better use auto
    auto i = M.begin();
    while(i!=M.end())
    {
        cout<<i->first<<" "<<i->second<<endl;
        i++;
    }
    cout<<M.at(2)<<endl;
    cout<<M.size()<<endl;
    if(M.empty())
    cout<<"Map is empty";
    else cout<<"Map has some key values";
}