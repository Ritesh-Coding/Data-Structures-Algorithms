#include<iostream>
using namespace std;
void Tester(float xx, float yy = 5.0);
class IndiaBix
{
    float x; 
    float y; 
    public:
    void Tester(float xx, float yy = 5.0)
    {
        x = xx;
        y = yy;
        cout<<++x % --y; 
    }
};
int main()
{
    IndiaBix objBix;
    objBix.Tester(5.0, 5.0);
    return 0; 
}