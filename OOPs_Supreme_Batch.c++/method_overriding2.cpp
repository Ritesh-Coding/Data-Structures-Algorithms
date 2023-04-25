#include<iostream>
using namespace std;
class Animal
{
    public:
    void speak()    //virtual keyword is always be placed on the base class 
    {
        cout<<"speaking";
    }

};

class Dog:public Animal{
     public:
       void speak()
        {
            cout<<"Barking";
        }
};

class smallDog: public Dog
{
    public:
    void speak()
    {
        cout<<"small barking";
    }
};
int main()
{
    // Animal *a = new Animal;
    // // a->speak();

    // Dog *d = new Dog;  //method overriding
    // d->speak();

    // Animal *a =new Dog; //here by these UPCASTING is there and by using virtual keyword in the parent class we print the method of the child class
    // a->speak();

    // Dog *d = (Dog*)new Animal;
    // d->speak();


    //upcasting
    // Dog *s=new smallDog;
    // s->speak();

    smallDog * s = (smallDog*)new Dog;  //in downcasting if we want to print the method of the parent then mark parent method as virtual 
    s->speak();


    return 0;
}