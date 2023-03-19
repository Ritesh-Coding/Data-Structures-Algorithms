#include<iostream>
using namespace std;
void print_digit(int n) //head recursion
{
    if(n==0)
    {
        return;
    } 

    print_digit(n/10);

    int digit=n%10;
    cout<<digit;
}
int main()
{
    int n=625;
    print_digit(n);
    return 0;
}