#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> s = {{5,3,4},{1,5,8},{6,4,2}};
    vector<int> sumRows;
    for(int i=0;i<s.size();i++)
    {
        int add=0;
        for(int j=0;j<s[i].size();j++)
        add += s[i][j];
        sumRows.push_back(add);
    }
    for(auto x:sumRows)
    cout<<x<<" ";
}