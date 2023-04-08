#include<iostream>
using namespace std;
class Animals
{
    //these are the state or properties 
    public:
    int age = 56;
    string name="Tommy";

    //this are the behaviiours or methods 
    void bark()
    {
        cout<<"barking";
    }


};
int main()
{
    // this all we have done using static memory allocation 
    Animals a;
    cout<<a.age<<endl;
    cout<<a.name<<endl;

    a.bark();

    cout<<endl<<endl<<endl;
    //this all we have done using dynamic memory allocation
    // Animals *a1 = new Animals;
    // cout<<a1->age;



    return 0;
}
