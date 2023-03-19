#include<iostream>
using namespace std;
void print(int n) //head recursion 
{
    if(n==0)
    {
        return;
    }

    print(n-1);

    cout<<n<<" ";
}
int main()
{
    print(10);
    return 0;
}