#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n*2-2-row; col++)
        {
            cout<<"*";
        }
        for (int col = 0; col < row+1; col++)
        {
            cout<<row+1;
            if(row!=col)
            {
                cout<<"*";
            }
        }
        for (int col = n*2-2-row; col >0; col--)
        {
            cout<<"*";
        }
        
        
        cout<<endl;
    }
    
}