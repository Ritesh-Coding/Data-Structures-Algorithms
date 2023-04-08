#include<iostream>
#include<bits/stdc++.h>

#include<vector>
using namespace std;
    unordered_map<int,bool> rowCheck;
    unordered_map<int,bool> upperLeftDiagnolCheck;
    unordered_map<int,bool> bottomLeftDiagnolCheck;

void printSolution(vector<vector<char>>  &board,int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;   
        
    }
    
    cout<<endl<<endl<<endl;
}

bool issafe(int i,int j,vector<vector<char>> &board,int n)
{
    
        if(rowCheck[i] == true)
            return false;
            
        if(upperLeftDiagnolCheck[n-1+j-i] == true)
            return false;
            
        if(bottomLeftDiagnolCheck[i+j] == true)
            return false;

        // cout<<"Hello";
        return true;
    
 

    // int row=i;
    // int col=j;
    // //check kr rhe h ki row m phele se he koi queen to nhi padi h
    // while(col>=0)
    // {
    //     if (board[row][col]=='Q')
    //     {
    //         return false;
    //     }
    //     col--;
    // }

    // //check kr lete h upper diagonal m joi queen padi to nhi h
    //  row=i;
    //  col=j;
    // while(row>=0 && col>=0)
    // {
    //     if (board[row][col]=='Q')
    //     {
    //         return false;
    //     }
    //     row--;
    //     col--;
    // }

    // //check kr lete h lower diagonal m koi queen padi to nhi h
    // row=i;
    // col=j;
    // while(row<n && col>=0)
    // {
    //     if (board[row][col]=='Q')
    //     {
    //         return false;
    //     }
    //     row++;
    //     col--;
        
    // }

    return true;


}
void solve(vector<vector<char>>  &board,int col,int n)
{
    if(col>=n)
    {
        printSolution(board,n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if(issafe(row,col,board,n))
        {
                board[row][col]='Q';
                rowCheck[row]=true;
                upperLeftDiagnolCheck[n-1+col-row]=true;
                bottomLeftDiagnolCheck[row+col]=true;

                // recursion call
                solve(board,col+1,n);

                //backtracking
                rowCheck[row]=false;
                upperLeftDiagnolCheck[n-1+col-row]=false;
                bottomLeftDiagnolCheck[row+col]=false;
                board[row][col]='-';


        }
        
    }
    
}

int main()
{
    
    int n=4;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);
    
    
}