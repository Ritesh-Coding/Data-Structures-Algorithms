#include<iostream>
#include<limits.h>
using namespace std;
int solve(int arr[],int output,int target,int n)
{
    
    if (target==output)
    {
        return 0;
    }
    if (output>target)
    {
        return INT16_MAX;
    }
    int mini=INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        int ans=solve(arr,output+arr[i],target,n);
        
        if (ans!=INT16_MAX)
        {
            mini=min(mini,ans+1);
        }
        
    }
    
    return mini;
    
}
int main()
{
    int arr[]={1,2};
    int target=3;
    int output=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=solve(arr,output,target,n);
    cout<<"Answer is :--> "<<ans;
    return 0;
}
