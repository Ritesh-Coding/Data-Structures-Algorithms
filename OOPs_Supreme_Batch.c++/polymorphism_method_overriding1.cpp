#include<iostream>
using namespace std;
class BadaAnimal
{
    public:
    BadaAnimal()
    {
    cout<<"I am inside Bada Animal";
    }
};
class Animal:public BadaAnimal
{
    public:
    virtual void speak()    //virtual keyword is always be placed on the base class 
    {
        cout<<"speaking";
    }


    Animal()
    {
        cout<<"I am inside Animal class  ";
    }

};

class Dog:public Animal{
        public:
        void speak()
        {
            cout<<"Barking";
        }

        Dog()
        {
            cout << "I am inside Dog class ";
        }
};

class smallDog : public Dog{
    smallDog()
    {
        cout<<"I am inside small Dog class";
    }
};
int main()
{
    // Animal *a = new Animal;
    // cout<<endl;
  

    // Dog *d = new Dog;  //method overriding
    // cout<<endl;

    // Animal *a =new Dog; //here by these UPCASTING is there and by using virtual keyword in the parent class we print the method of the child class
    // cout<<endl;

    // Dog *d = (Dog*)new Animal;


    // Animal *a = new Animal;
    smallDog *s=(smallDog*)new Dog;

    return 0;
}