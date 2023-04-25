#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void speak()    //virtual keyword is always be placed on the base class 
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
int main()
{
    // Animal *a = new Animal;
    // a->speak();

    // Dog *d = new Dog;  //method overriding
    // d->speak();

    // Animal *a =new Dog; //here by these UPCASTING is there and by using virtual keyword in the parent class we print the method of the child class
    // a->speak();

    Dog *d = (Dog*)new Animal;
    d->speak();



    return 0;
}