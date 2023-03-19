#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the row:--> ";
    cin>>n;
    for (int row = 0; row < n; row++)  //upper half having 3 patterns
    {
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        for (int spaces = 0; spaces < 2*row+1; spaces++)
        {
            cout<<" ";
        }
        for (int col = 0; col < n-row; col++)
        {
            cout<<"*";
        }
        cout<<endl;        
    }  
    for (int row = 0; row < n; row++) //lower half having 3 patterns
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        for (int spaces = 0; spaces < 2*n-2*row-1; spaces++)
        {
            cout<<" ";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<"*";
        }
        
        
        
        cout<<endl;
        
    }
      
    
} 
