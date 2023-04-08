#include<iostream>
#include<vector>
using namespace std;

void printSolution(vector<vector<char>>  &board,int col,int n)
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

bool issafe(int i,int j,vector<vector<char>>  &board,int n)
{
    int row=i;
    int col=j;
    //check kr rhe h ki row m phele se he koi queen to nhi padi h
    while(col>=0)
    {
        if (board[row][col]=='Q')
        {
            return false;
        }
        col--;
    }

    //check kr lete h upper diagonal m joi queen padi to nhi h
     row=i;
     col=j;
    while(row>=0 && col>=0)
    {
        if (board[row][col]=='Q')
        {
            return false;
        }
        row--;
        col--;
    }

    //check kr lete h lower diagonal m koi queen padi to nhi h
    row=i;
    col=j;
    while(row<n && col>=0)
    {
        if (board[row][col]=='Q')
        {
            return false;
        }
        row++;
        col--;
        
    }

    return true;


}
void solve(vector<vector<char>>  &board,int col,int n)
{
    if(col>=n)
    {
        printSolution(board,col,n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if(issafe(row,col,board,n))
        {
                board[row][col]='Q';

                // recursion call
                solve(board,col+1,n);

                //backtracking
                board[row][col]='-';


        }
        
    }
    
}

int main()
{
    
    int n=5;
    vector<vector<char>>board(n,vector<char>(n,'-'));
    int col=0;
    solve(board,col,n);
    
    
}