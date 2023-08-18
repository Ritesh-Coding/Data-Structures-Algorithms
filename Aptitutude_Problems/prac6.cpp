#include<iostream>
using namespace std; 
struct MyData
{
    public:
    int Addition(int a, int b = 10)
    {
        return (a *= b + 2);
    }
    float Addition(int a, float b);
};
int main()
{
    MyData data;
    cout<<data.Addition(1)<<" ";
    cout<<data.Addition(3, 4);
    return 0; 
}