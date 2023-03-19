#include<iostream>
using namespace std;
int a;

int &num()
{
    return a;
}
int main()
{
    num()=76;

    cout<<a;
    return 0;
}