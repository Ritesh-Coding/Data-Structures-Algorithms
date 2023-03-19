#include<iostream>
using namespace std;
int power_of_2(int n)
{
    if(n==0)  //base case 
    {
        return 1;
    }
    return 2*power_of_2(n-1); //recursion relation 
}
int main()
{
    int ans=power_of_2(6);
    cout<<ans;
    return 0;
}