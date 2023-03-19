#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,4};
    vector<int>  brr{4,4,5,6};
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }
    for (int j = 0; j < brr.size(); j++)
    {
        ans.push_back(brr[j]);
    }
    
    for (int k = 0; k < ans.size(); k++)
    {
        int element=ans[k];
        for (int m=k+1;m < ans.size(); m++)
        {
            if (element==ans[m])
            {
                ans[m]=-1;
            }
            
        }       
        
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if(ans[i]!=-1)
        cout<<ans[i]<<" ";
    }
    
    

    return 0;
}