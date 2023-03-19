#include<iostream>
using namespace std;

int fibonnaci(int n)
{
    if (n==0)  //base case 
    {
        return 0;
    }
    if (n==1) //base case 
    {
        return 1;
    }

    return fibonnaci(n-1)+fibonnaci(n-2);
    
}

int main()
{
    int n;
    cout<<"Enter the value to find tha fibonnaci value  :--> ";
    cin>>n;

    int ans = fibonnaci(n);
    cout <<"The fibonnaci number at index "<<n <<" is :--> "<<ans;

    return 0;
}