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
    cout<<x<<endl;
}