#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the rowcount :-->";
    cin>>n;
    for (int  row = 0; row < n; row++)       //upper_half
    {
        for (int j = 0; j < n-row-1; j++)
        {
            cout<<" ";
        }
       
        for (int j = 0; j < 2*row+1; j++)
        {
            
            if ( j==0||j==2*row )
            {
                cout<<"*";
            
            }
            else
            {
                cout<<" ";
            }        
        }
        cout<<endl;
    }

    for (int row = 0; row < n; row++)  //lower half
    {
            for (int spaces = 0; spaces < row; spaces++)
            {
                cout<<" ";
            }
            
            for (int j = 0; j <2*n-2*row-1; j++) //
            {
                if ( j==0||j==2*n-2*row-2)
            {
                cout<<"*";
            
            }
            else
            {
                cout<<" ";
            }  
                
            }
              cout<<endl;
    }         

}