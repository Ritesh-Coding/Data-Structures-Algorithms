#include<iostream>
using namespace std;
class Animal
{
    public:
    ~Animal()
    {
        cout<<"I am destructor";
    }
};
int main()
{
    Animal b;
    cout<<endl;


    Animal *a = new Animal();  //for dynamiic we have to call it manually
    delete(a);
    cout<<endl;
    return 0;
}   