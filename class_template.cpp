#include<iostream>
using namespace std;
class ArrayList
{
struct StrForArray
{
int size;
int *arr;
};
StrForArray *s;
public:
ArrayList(int size)
{
s=new StrForArray;
s->size=size;
s->arr= new int[s->size];
}
void insert(int index,int data)
{
    if (index>=0 && index<=((s->size)-1))
    s->arr[index]=data;
}
void printData()
{
for (int i=0;i<s->size;i++)
//for(int i:s->arr)
cout<<s->arr[i]<<"\t";
//cout<<i<<"\t";
}};
int main()
{
    ArrayList obj(5);
obj.insert(0,9);
obj.insert(1,8);
obj.insert(2,7);
obj.printData();
return 0;
}