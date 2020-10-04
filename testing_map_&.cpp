#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map <int,string> M{
        {1,"kishan is good"},
        {2,"kanhaiya as well"},
        {3,"Gudo"},
    };
    M.insert(pair<int,string>(4,"Pyaroo"));
    for (const auto &i=M.begin();i!=M.end();++i)
    cout<<i->second<<endl;
}
