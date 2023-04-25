#include<iostream>
using namespace std;
int main()
{
    int row=5;
    int col=10;
    int **arr=new int *[row];  //array from heap 
    for (int j = 0; j < row; j++)
    {
        arr[j]=new int[col];
        
    }
     
    //  //deallocate of memory
    // for (int j = 0; j < row; j++)
    // {
    //     delete[] arr[j];
    // }
    // delete[] arr;



    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j]=0;
        }
        
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
    

}