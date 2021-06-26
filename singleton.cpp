#include<iostream>
using namespace std;

class singleton{
    singleton(){}
    public:
        static int a;
        static singleton* createObj();
};

int singleton::a=0;

singleton* singleton::createObj(){
            if(singleton::a<5){
            singleton *pobj = NULL;
            if(pobj == NULL)
            pobj = new singleton();
            singleton::a++;
            return pobj;
            }
            else return NULL;
    }

int main(){
    singleton *ptr = singleton::createObj();
    cout<<ptr->a;
    singleton *ptr2 = singleton::createObj();
    cout<<ptr2->a;
    singleton *ptr3 = singleton::createObj();
    cout<<ptr3->a;
    singleton *ptr4 = singleton::createObj();
    cout<<ptr4->a;
    singleton *ptr5 = singleton::createObj();
    cout<<ptr5->a;
    singleton *ptr6 = singleton::createObj();
    cout<<ptr6->a;
    singleton *ptr7 = singleton::createObj();
    cout<<ptr7->a;
}
