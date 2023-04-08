#include<iostream>
#include<vector>
using namespace std;
void solve(string &n,string output,vector<string> &ans,int index,vector<string> &mapping)
{
    if (index>=n.length())
    {
        ans.push_back(output);
        return;
    }
    int n_in_digit=n[index]-'0';
    string str=mapping[n_in_digit];
    
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        solve(n,output+ch,ans,index+1,mapping);
    }
    


    
}
int main()
{
    string n="23";
    string output="";
    int index=0;
    vector<string> mapping(10);
    mapping[2]="abc";
    mapping[3]="def";
    mapping[4]="ghi";
    mapping[5]="jkl";
    mapping[6]="mno";
    mapping[7]="pqrs";
    mapping[8]="tuv";
    mapping[9]="wxyz";
    vector<string> ans;
    solve(n,output,ans,index,mapping);
    

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    
    return 0;
}