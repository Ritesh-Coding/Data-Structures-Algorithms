#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {

        if (row == 0 || row == 4)
        {
            for (int col = 0; col < row + 1; col++)
            {
                cout << col + 1;
            }
        }
        else
        {
            cout<<1;
            for (int spaces = 0; spaces < row-1; spaces++)
            {
                cout<<" ";
            }
            cout<<row+1;
            
        }
        cout << endl;
    }
    
}
