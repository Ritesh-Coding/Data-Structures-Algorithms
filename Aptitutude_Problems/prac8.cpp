#include <iostream> 
using namespace std;


enum xyz 
{
    a, b, c
}; 
int main()
{
    int x = a, y = b, z = c; 
    int &p = x, &q = y, &r = z; 
    p = z; 
    p = ++q;
    q = ++p;
    z = ++q + p++; 
    cout<< p << " " << q << " " << z;
    return 0; 
}
