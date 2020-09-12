#include <iostream>
using namespace std;
template <class T>
class ArrayList
{
    struct StrForArray
    {
        int size;
        T *arr;
    };
    StrForArray *s;

public:
    ArrayList(int size)
    {
        s = new StrForArray;
        s->size = size;
        s->arr = new T[s->size];
    }
    void insert(int index, T data)
    {
        if (index >= 0 && index <= ((s->size) - 1))
            s->arr[index] = data;
    }
    void printData()
    {
        for (int i = 0; i < s->size; i++)
            cout << s->arr[i] << "\t";
    }
};
int main()
{
    ArrayList<float> obj(5);
    obj.insert(0, 9.3);
    obj.insert(1, 8.6);
    obj.insert(2, 7.7);
    obj.printData();
    return 0;
}