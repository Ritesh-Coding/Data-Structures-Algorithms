#include<iostream>
#include<vector>
using namespace std;
bool issafe(int i,int j,int row,int col,int arr[][4],vector<vector<bool>> &visited)
{
    if (((i>=0 && i<row) && (j>=0 && j<col))&& arr[i][j]==1 && visited[i][j]==false)
    {
        return true;
    }
    
    else
    {
        return false;
    }

}

void solve(int arr[][4],int row,int col,int i,int j,vector<vector<bool>> &visited,vector<string> &path,string output)
{
  if (i == row-1 && j==col-1)
  {
        path.push_back(output);
        return ;
  }
  
  
  //for down
  //   i -> i+1, j->j
  if (issafe(i+1,j,row,col,arr,visited))
  {
     visited[i+1][j]=true;
     solve(arr,row,col,i+1,j,visited,path,output+"D");
     visited[i+1][j]=false;
  }

  //for left 
  //i-> i , j->j-1
   if (issafe(i,j-1,row,col,arr,visited))
  {
     visited[i][j-1]=true;
     solve(arr,row,col,i,j-1,visited,path,output+"L");
     visited[i][j-1]=false;
  }


  //for right
  //i-> i , j-> j+1
   if (issafe(i,j+1,row,col,arr,visited))
  {
     visited[i][j+1]=true;
     solve(arr,row,col,i,j+1,visited,path,output+"R");
     visited[i][j+1]=false;
  }


  //for up
  //i-> i-1 ,j -> j
   if (issafe(i-1,j,row,col,arr,visited))
  {
     visited[i-1][j]=true;
     solve(arr,row,col,i-1,j,visited,path,output+"U");
     visited[i-1][j]=false;
  }
  
  
}

int main()
{
    int arr[4][4]={{1,0,0,0},
                 {1,1,0,1},
                 {1,1,0,0},
                 {0,1,1,1}};
    
    int row = 4;
    int col = 4;
    vector<vector<bool>>visited(row,(vector<bool>(col,false)));
    vector<string> path;
    int i=0;
    int j=0;
    visited[0][0]=true;
    string output="";
    solve(arr,row,col,0,0,visited,path,output);
    
    // cout<<"Hello";

    for (auto i: path)
    {
        cout<<i<<endl;
    }
    


}