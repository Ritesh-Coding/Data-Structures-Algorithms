#include<iostream>
using namespace std;
int main()
{
    int n = 5698, reverse=0;
    while(n!= 0)
    {
        int remainder = n%10; //8 //9  //6
        reverse = reverse * 10 + remainder; //8 //89 896
        n = n / 10; 
    }
    cout << reverse;

    return 0;

}