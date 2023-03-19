#include<iostream>
#include<vector>
using namespace std;
void find_String(string str,int n,int i,int key,vector<int>& ans)
{
    if(i>=n)
    {
        return ;
    }
    if (str[i]==key)
    {
        ans.push_back(i);

    }
    find_String(str,n,i+1,key,ans);
}

int main()
{
    string str="loveBabbar";
    int n=str.length();
    char key='b';
    int i=0;
    vector<int> ans;
    find_String(str,n,i,key,ans);

    for(auto val:ans)
    {
        cout<<"Found at index:--> " <<val<<endl;
    }

    return 0;
}