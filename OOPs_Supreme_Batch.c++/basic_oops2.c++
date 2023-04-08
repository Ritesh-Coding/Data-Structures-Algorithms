//it includes getter and setter

#include<iostream>
using namespace std;
class Animals
{
    private:
    int age=18;
    string name="Tommy";

    public:
    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        this->age=a;
    }
    
};
int main()
{
    // Animals *a1 = new Animals;
    // a1->setage(45);

    Animals a;
    //here we set the getter and setter to access the privare access modifier and use it here 
    a.setage(45);
    cout<<a.getage();

    return 0;
}