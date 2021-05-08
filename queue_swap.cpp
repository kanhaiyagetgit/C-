#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    vector<int> v = {1,2,3,4,5,6};
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    q.push(*it);
    cout<<endl;
    queue<int> q2;
    q2.push(7);
    q2.push(8);
    q2.push(9);
    q2.push(0);
    swap(q,q2);
    while(!q2.empty())
    {
        cout<<" "<<q2.front();
        q2.pop();
    }
    return 0;
}