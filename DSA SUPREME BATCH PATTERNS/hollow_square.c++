#include<iostream>
using namespace std;
int main()
{
    int rowcount;
    cout<<"Enter the rowcount:--> ";
    cin>>rowcount;
    for (int i = 0; i < rowcount; i++)
    {
         if(i==0 || i==rowcount-1)
        {
            for (int j = 0; j < rowcount; j++)
            {
                cout<<"* ";
            }
            
        
        }
        else
        {
            cout<<"* ";
            for (int j = 0; j < rowcount-2; j++)
            {
                cout<<"  ";
            }
            cout<<"* ";
            
        }
       
        cout<<endl;
    }
    
    
} 
