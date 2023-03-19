#include<iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        for (int spaces = 0; spaces < 5-row-1; spaces++)
        {
            cout<<" ";
        }
        int col=0;
        for (; col < row+1; col++)
        {
             cout<<1+col;
        }
        col=col-1;
        for (int i = col; i>=1 ; i--)
        {
            cout<<i;
        }
        
        
        
       cout<<endl; 
    }
    
}