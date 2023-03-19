#include<iostream>
using namespace std;
int main()
{
    int rowcount,colcount;
    cout<<"Enter the rowcount :--> ";
    cin>>rowcount;
    cout<<"Enter the columncount :--> ";
    cin>>colcount;

    for (int row = 0; row < rowcount; row++)
    {
        if (row==0 || row ==rowcount-1)
        {
            for (int col = 0; col < colcount; col++)
            {
                cout<<"* ";
            }            
        }
        else
        {
            //for first star
            cout<<"* ";
            //for remaining spaces
            for (int col = 0; col < colcount-2; col++)
            {
                cout<<"  ";
            }
            //for last star
            cout<<"* ";            
        }
        cout<<"\n";
        
    }
    

}