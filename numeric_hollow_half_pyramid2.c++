#include <iostream>
using namespace std;
int main()
{
    int n=5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row-1; col++)
        {
            cout<<" ";
        }
        

        if (row == 0 || row == n-1)
        {
            for (int col = 0; col < row + 1; col++)
            {
                cout << col + 1<<" ";
            }
        }
        else
        {
            //for 1 only
            cout<<1<<" ";

            //for spaces 
            for (int spaces = 0; spaces < row-1; spaces++)
            {
                cout<<"  ";
            }

            //for  last column
            cout<<row+1;
            
        }
        cout << endl;
    }
    
}
