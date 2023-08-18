#include<iostream>
using namespace std;
const double BixConstant(const int, const int = 0);
int main()
{
    const int c = 2 ;
    cout<< BixConstant(c, 10)<< " "; 
    cout<< BixConstant(c, 20)<< endl; 
    return 0;
}
const double BixConstant(const int x, const int y)
{
    return( (y + (y * x) * x % y) * 0.2);
}