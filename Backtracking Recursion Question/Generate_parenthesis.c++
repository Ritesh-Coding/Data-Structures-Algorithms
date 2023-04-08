#include<iostream>
#include<vector>
using namespace std;
void solve(int n,string str,int used_left,int left_remain,int used_right,int right_remain,vector<string> &result) 
{
    if (left_remain==0 && right_remain==0)
    {
        result.push_back(str);        
        return;
    }   
    if (left_remain>0)
    {        
        solve(n,str+'(',used_left+1,left_remain-1,used_right,right_remain,result);
    }
    if (used_left > used_right)
    {
        solve(n,str+')',used_left,left_remain,used_right+1,right_remain-1,result);
    }    

}
int main()
{
    int n=3;
    int used_left_parenthesis=0;
    int remaining_left_parenthesis=n;
    int used_right_parenthesis=0;
    int remaining_right_parenthesis=n;
    
    vector<string> result;
    string str="";
    solve(n,str,used_left_parenthesis,remaining_left_parenthesis,used_right_parenthesis,remaining_right_parenthesis,result);

    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<endl;
    }

    return 0;
}