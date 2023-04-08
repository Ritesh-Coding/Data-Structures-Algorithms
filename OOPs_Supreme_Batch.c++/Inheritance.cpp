#include<iostream>
using namespace std;
class Animal
{
    public:
     int age;
     int weight;
     Animal()
     {
        this->age=45;
        this->weight=78;
     }
};
class Dog : private Animal{
       
       public:
       void print()
       {
                cout<<this->age;
       }
    
};



int main()
{
    Animal a;
    Dog d;
    


    cout<<d.age<<endl;
    d.print();

    return 0;
}