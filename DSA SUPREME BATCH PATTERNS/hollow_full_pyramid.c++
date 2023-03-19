#include<iostream>
using namespace std;
int main()
{
   int rowcount;
    cout<<"Enter the rowcount :--> ";
    cin>>rowcount;

    for (int row = 0; row < rowcount; row++)
    {
        for (int spaces = 0; spaces < rowcount-row-1; spaces++)
        {
            cout<<" ";
        }
        
        if (row==0 || row == rowcount-1)
        {
            for (int col = 0; col < row+1; col++)
            {
                cout<<"* ";
            }
            
        }
        else
        {
            cout<<"*";
            for (int col = 0; col < 2*row-1; col++)
            {
                cout<<" ";
            }
            cout<<"*";
            
        }
       cout<<endl; 
        
    }
    
}