#include <iostream>
#include <unordered_map>
using namespace std;
 
int main()
{
    
    unordered_map<int, int> umap;
 
    // inserting values by using [] operator
    umap[1] = 10;
    umap[2] = 20;
    umap[3] = 30;

    //unordered_map<int, int> umap{{1,2},{3,4},{2,5},{4,5}};
    for (auto x : umap)
      cout << x.first << " " << x.second << endl;
    cout<<umap.bucket_count();
 
}