// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    for (int row = 1; row <=7; row++)
    {
      int C=1;
      for (int j =  1; j <=row; j++)
      {
        cout<<C<<" "; 
      
        C=C*(row-j)/j;
      }
      cout<<endl;
    }    

}
