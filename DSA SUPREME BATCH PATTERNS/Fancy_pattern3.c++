#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:--> ";
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*row+1; col++)
        {
            if(col==0)
            {
                cout<<"*";
            }
        }
        
        
        int col=0;
        for (; col < row; col++)
        {
             cout<<1+col;
        }
        col=col-1;
        for (int i = col; i>=1 ; i--)
        {
            cout<<i;
        }

        for (int col = 0; col < 2*row+1; col++)
        {
            if(col==2*row && row!=0)
            {
                cout<<"*";
            }
        }      

       cout<<endl; 
    }
   


   for (int row = 0; row < n-1; row++)
    {
        for (int col = 0; col < 2*(n-1)-2*row-1; col++)
        {
            if(col==0)
            {
                cout<<"*";
            }
        }

    int col = 0;
    for (; col < (n-1)-row-1; col++)
    {
         cout<<1+col;

    }
    col=col-1;
        for (int i = col; i>=1 ; i--)
        {
            cout<<i;
        }
    
        

       for (int col = 0; col < 2*(n-1)-2*row-1; col++)
        {
            if(col==2*(n-1)-2*row-2  && col!=0)
            {
                cout<<"*";
            }
        }      
        
        
       cout<<endl; 
    }
   
    
}