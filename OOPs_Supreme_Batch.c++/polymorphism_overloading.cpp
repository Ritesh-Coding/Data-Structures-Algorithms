#include<iostream>
using namespace std;

class Animals
{
    public:
    int sum(int a,int b)
    {
        return a +b;
    }
    int sum(int a,int b,int c)
    {
        return a+b+c;
    }
};
int main()
{
    Animals a;
    int ans1=a.sum(4,5);
    int ans2=a.sum(4,5,1);
    cout<<ans1<<" "<<ans2;
    return 0;
}