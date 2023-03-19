#include<iostream>
using namespace std;
int main()
{
    int rowcount;
    cout<<"Enter thw rowcount :--> ";
    cin>>rowcount;

    for (int row = 0; row < rowcount; row++)
    {
        for (int  col = 0; col < row+1; col++)
        {
            cout<<col+1;
            cout<<" ";
        }        
    cout<<"\n"; 
    }
    
} 
