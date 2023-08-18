#include<iostream>
using namespace std;
 
class Base
{
    int x, y, z; 
    public: 
    Base()
    {
        x = y = z = 0;
    }
    Base(int xx, int yy = 'A', int zz = 'B')
    {
        x = xx;
        y = x + yy;
        z = x + y;
    }
    void Display(void)
    {
        cout<< x << " " << y << " " << z << endl;
    }
};
class Derived : public Base
{
    int x, y; 
    public:
    Derived(int xx = 65, int yy = 66) : Base(xx, yy)
    {
        y = xx; 
        x = yy;
    }
    void Display(void)
    {
        cout<< x << " " << y << " ";
        Display(); 
    }
};
int main()
{
    Derived objD;
    objD.Display();
    return 0; 
}