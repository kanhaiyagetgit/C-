#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<pair<vector<int>,int>> l;
    vector<int> v{1,2,3};
    vector<int> v2{4,2,3};
    l.push_back(make_pair(v,2));
    l.push_back(make_pair(v2,5));
    for(auto x: l)
    for(auto y: x.first)
    cout<<y;
    return 0;
}