#include<iostream>
#include<tuple>
using namespace std;
int main()
{
    tuple<char,int,float> T;
    T= make_tuple('z',3,3.4);//Assigning valuesin tuple using make_tuple
    //get is used to access tuple values and can modify them as well
    cout<<get<0>(T)<<" "<<get<2>(T)<<endl;
    cout<<get<1>(T)<<"="<<get<int>(T)<<endl;
    get<1>(T)=1;
    cout<<get<1>(T);
    cout<<endl<<"Tuple size is "<<tuple_size<decltype(T)>::value<<endl;
    tuple<char,int,float> U;
    U= make_tuple('a',4,4.4);
    T.swap(U);//To swap 2 tuples
    cout<<get<0>(T)<<" "<<get<1>(T)<<" "<<get<2>(T)<<" "<<endl;
    auto P=tuple_cat(T,U);//to concatenate 2 tuples
    cout<<get<0>(P)<<" "<<get<1>(P)<<" "<<get<2>(P)<<" "<<get<3>(P)<<" "<<get<4>(P)<<" "<<get<5>(P)<<" ";
}
