//here we will the constructor
#include<iostream>
using namespace std;
class Animals
{
    //these are the state or properties 
    public:
    int age;
    string name;

    //this are the behaviiours or methods 
    void bark()
    {
        cout<<"barking";
    }
    Animals()
    {
        this->age=0;
        this->name="hello";
        cout<<"Inside Default constructor"<<endl;
    }

    Animals(int age)
    {
        this->age=age;
        this->name="hello";
        cout<<"Inside Parametarized constructor"<<endl;
    }

    Animals(Animals &obj)
    {
        this->age=obj.age;
        cout<<"I am copy constructor";
    };



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

    Animals *a1=new Animals(45);  
    cout<<a1->age;

    Animals c(*a1);
    Animals c(a);






    return 0;
}
