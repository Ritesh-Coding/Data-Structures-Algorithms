#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for (int row = 0; row < n; row++)
    {
       for (int spaces = 0; spaces < n-row-1; spaces++)
       {
            cout<<" ";
       }

      //*******************for 1st part***************** 
       //1st method
       int start=row+1;
       for (int col = 0; col < row+1; col++)
       {
          cout<<start;
          start=start+1;
       }
    
    //     //2nd method
    // for (int  col = 0; col < row+1; col++)
    // {
    //         cout<<row+col+1;
    // }

    //for first row start value becomes 2;
    //for second row start value becomed 4
    //for third row start value becomed 6


    //***********for reverse ***********
    //method1
    // start=start-2;
    // for (int col = 0; col < row; col++)
    // {
    //     cout<<start;
    //     start=start-1;
    // }    
    // 

    //method2
    start=2*row;
    for (int col = 0; col < row; col++)
    {
        cout<<start;
        start=start-1;
    }
    
   cout<<endl;  
    }
      
}