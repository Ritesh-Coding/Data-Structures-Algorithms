#include<iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        int col;
        for (col = 0; col < row+1; col++)
        {
            int ans=col;
            char ch='A'+ans;
            cout<<ch;   
        
        }
        col = col-1;        
        
        for (; col >=1; col--)
        {
            
            char ch=col+'A'-1;
            cout<<ch;
        }
        
        cout<<endl;
    }   
    
}