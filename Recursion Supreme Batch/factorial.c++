#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)   //base case 
        return 1;

    return  n * factorial(n-1);  //recursive function 
}
int main()
{
    int n;
    cout<<"Enter the value to find factorial :--> ";
    cin>>n;

    int ans = factorial(n);
    cout <<"The factorial of "<<n<< " is :-->"<<ans;

    return 0;
}