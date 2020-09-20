#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
string s;
ifstream file{"data.txt"};
vector<string> lines{};
while(getline(file,s))
lines.push_back(s);
sort(begin(lines),end(lines));
for (auto x:lines)
cout<<x<<" ";
}