#include<iostream>
using namespace std;
int main()
{
    int n=7,sum=0;
    while (n!=0)
    {
        if (n&1)
        {
            sum+=1;
        }
      n=n>>1;
        
    }
    cout<<sum;
    return 0;
}