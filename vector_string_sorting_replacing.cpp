#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> names{ "Kishan","Kanhaiya","Guro","papa","Mommy"};
    sort(begin(names),end(names));
    for (auto x: names)
    cout<<x<<" ";
    cout<<endl;
    if(const auto it=find(begin(names),end(names),"Kishan");it!=end(names))//keep searching for string kishan until ur iterator reach the end of vector names
    {
        *it="***";
    }
    if(const auto it=find(begin(names),end(names),"Kanhaiya");it!=end(names))//keep searching for string kishan until ur iterator reach the end of vector names
    {
        *it="**";
    }
    for (auto x: names)
    cout<<x<<" ";
    cout<<endl;
}