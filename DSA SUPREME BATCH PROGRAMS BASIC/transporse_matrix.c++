#include<iostream>
using namespace std;
void Display(int local_matrix[][3],int row,int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<local_matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
void transporse(int arr[3][3],int row,int col,int local_matrix[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            local_matrix[j][i]=arr[i][j];
        }
        
    }
    Display(local_matrix,3,3);
}
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,98,9}};
    int row=3,col=3;
    int local_matrix[3][3];
    transporse(arr,row,col,local_matrix);
    return 0;
}