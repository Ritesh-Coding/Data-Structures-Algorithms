#include<iostream>
using namespace std; 
struct MyStructure
{
    class MyClass
    {
        public:
        void Display(int x, float y = 97.50, char ch = 'a')
        {
            cout<< x << " " << y << " " << ch;
        }
    }Cls; 
}Struc;
 
int main()
{
    Struc.Cls.Display(12, 'b');
    return 0; 
}