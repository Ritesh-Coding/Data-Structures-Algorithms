#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for (int row = 0; row < 4; row++)
    {
            for (int col = 0; col < row+1; col++)
            {
                cout<<count+1;
                count=count+1;
                if (col!=row)
                {
                    cout<<"*";
                }
            }
        cout<<endl;    
    }
    // cout<< "***************************"<<count;
    count=count-4;
    int temp=count;
    // cout<<count;
     

    for (int row = 4; row > 0; row--)
    {
        for (int col = 0; col < row; col++)
        {
            cout<<temp+1;
            temp=temp+1;
            if (col!=row-1)
                {
                    cout<<"*";
                }
        }
        count=count-(row-1);
        temp=count;
        cout<<endl;        
    }   
    
}