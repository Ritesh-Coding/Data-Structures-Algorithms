#include<iostream>
using namespace std;
int main()
{
    int rowcount;
    cout<<"Enter the rowcount :--> ";
    cin>>rowcount;
    for (int row = 0; row < rowcount; row++)
    {
        if (row==0 || row==rowcount-1)
        {
                for (int col = 0; col < rowcount-row; col++)
                {
                    cout<<"* ";
                }
            
        }
        else
        {
            cout<<"* ";
            for (int col = 0; col < rowcount-row-2; col++)
            {
                cout<<"  ";
            }
            cout<<"* ";

        }
        
        
        cout<<endl;
    }
    
}