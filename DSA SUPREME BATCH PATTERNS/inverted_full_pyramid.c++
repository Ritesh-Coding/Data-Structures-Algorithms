#include<iostream>
using namespace std;

int main()
{
    int rowcount;
    cout<<"Enter the rowcount:--> ";
    cin>>rowcount;    

    for (int row = 0; row < rowcount ; row++)
    {
       for (int col = 0; col < row ; col++)
       {
            cout<<" ";
       }
       for (int col = rowcount-row; col > 0 ; col--)
       {
            cout<<"* ";
       }
              
       cout<<endl; 
    }
    
}