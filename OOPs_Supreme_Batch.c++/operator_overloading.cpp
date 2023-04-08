#include<iostream>
using namespace std;
class Param
{
    public:
    int value;
    void operator +(Param &obj2)
    {
        int value1=this->value;
        int value2=obj2.value;
        cout<<value1-value2;
    }
};
int main()
{
    Param obj1,obj2;

    obj1.value=7;
    obj2.value=5;
    obj1 + obj2;


    return 0;
}