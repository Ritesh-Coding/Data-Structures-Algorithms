#include<iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
       for (int col = 0; col < row+1; col++)   //here last col is (row+1) start from 0
       {
         cout<<row+1; 
          if (col!=row)  //hence last col is row+1-1=row
            {
                cout<<"*";
            }            
       }                 
        cout<<endl;
    }
    for (int row = 0; row < 5; row++)
    {
        for (int  col = 0; col < 5-row; col++) //here last col is 5-row start from 0 
        {
            cout<<5-row;
              if (col!=5-row-1)      //hence last col is 5-row-1
            {
                cout<<"*";
            }  
             
        }
        cout<<endl; 
        
    }
    
    

    
}