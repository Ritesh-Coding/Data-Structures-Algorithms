#include<iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        int col;
        for (col = 0; col < row+1; col++)
        {
            cout<<col+1;   
        
        }
        col = col-1;
        for (; col >=1; col--)
        {
            cout<<col;
        }
        
        cout<<endl;
    }   
    
}