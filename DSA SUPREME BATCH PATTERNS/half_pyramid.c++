#include<iostream>
using namespace std;

int main()
{
    int rowcount;
    cout<<"Enter the rowcount:-->  ";
    cin>>rowcount;

    
    for (int row = 0; row < rowcount; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            cout<<"* ";
        }   
        cout<<"\n";     
    }
    
}