#include<iostream>
#include<limits.h>
using namespace std;
int solve(int arr[],int target,int n)
{
    if (target==0)
    {
        return 0;
    }
    if (target<0)
    {
        return INT16_MAX;
    }
    int mini=INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans=solve(arr,target-arr[i],n);//here we made the tree
        
        if (ans!=INT16_MAX)
        {
            mini=min(mini,ans+1);
        }
        
    }
    
    return mini;
    
}
int main()
{
    int arr[]={2,3};
    int target=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=solve(arr,target,n);
    cout<<"Answer is :--> "<<ans;
    return 0;
}
