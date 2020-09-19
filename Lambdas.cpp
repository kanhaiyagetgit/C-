#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    vector<string> names{ "Kishan","Kanhaiya","Guro","papa","Mommy"};
    sort(begin(names),end(names),[](auto const& a,auto const& b)
    {
        return a.length() < b.length();//To sort according to length as well
    }
    );
    for (auto x: names)
    cout<<x<<endl;
}