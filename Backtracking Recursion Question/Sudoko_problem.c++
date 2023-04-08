#include<iostream>
using namespace std;
bool issafe(int row,int col,int arr[9][9],int value)
{
    
    for (int i = 0; i < 9; i++)
    {
        //checking the row whether any same element present or not
        if(arr[row][i]==value)
            return false;

        //checking the col whether any same element present or nor
        if (arr[i][col]==value)
        {
            return false;
        }
        //here we check whether any number is present in 3*3 matrix
        if(arr[(3*(row/3)+(i/3))][3*(col/3)+(i%3)]==value)
        {
            return false;
        }
    
        
    }
    return true;
    

}


bool solve(int arr[9][9],int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            //check for empty cell
            
            if (arr[row][col]==0)
            {
                //try to fill with values ranging from 1 to 9
                for (int val = 1; val <= 9; val++)
                {
                    //check for safety                    
                    if (issafe(row,col,arr,val))
                    {
                        //insert
                        arr[row][col]=val;
                        //recursion sambal lega
                        bool aage_ka_answer=solve(arr,n);
                        if (aage_ka_answer==true)
                        {
                            return true;
                        }
                        else
                        {
                            //backtrack
                            arr[row][col]=0;
                        }                   
                    } 
                }
                //if 1 se 9 tak koi bhi value se solution
                    //nahi nikla ,current cell pr, 
                    //that means piche kahin pr galti h , 
                    //go back by returning false
            
                return false;
            }
        }      
    }
    return true;
    
}
int main()
{
    int arr[9][9]={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };
    int n=sizeof(arr)/sizeof(arr[0]);
    // cout<<n;
    solve(arr,n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}