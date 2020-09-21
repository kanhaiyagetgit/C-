#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> Calendar
    {
        {"Jan",1},
        {"Feb",2},
        {"Mar",3},
    };
    auto [pos,success]= Calendar.insert({"Sept",9});
    if(success)
    cout<<"Insertion is done without errors"<<endl;
    for (auto [month,month_number]:Calendar)
    cout<<month<<" "<<month_number<<endl;

}