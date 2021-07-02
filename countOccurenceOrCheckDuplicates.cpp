#include<bits/stdc++.h>
using namespace std;

void occurence(int a[],int n){
    int i,j,count;
    int freq[n];
    fill(freq,freq+n,-1);
    for(i=0;i<n-1;i++){
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
        freq[i]=count;
    }
    for(auto x:freq)
    cout<<x<<" ";
}

int main(){
    int arr[]={1,2,4,3,3,2,1};
    int x=sizeof(arr)/sizeof(arr[0]);
    occurence(arr,x);
}