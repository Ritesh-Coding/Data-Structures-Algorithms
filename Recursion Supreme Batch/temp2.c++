#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> arr,vector<int> output,int i,vector<vector<int>> &ans)
{
    if(i>=ans.size())
    {
        ans.push_back(output);
        return ;
    }
    solve(arr,output,i+1,ans);  //exclude
    int element=arr[i];
    output.push_back(element);
    solve(arr,output,i+1,ans);  //include

}
int main()
{
    vector<int> arr{1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index=0;

    solve(arr,output,index,ans);
    // cout<<"Helllo";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j];
            cout<<endl;
        }
        
    }
    
    

    return 0;
}