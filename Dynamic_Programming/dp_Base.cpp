#include<iostream>
#include<vector>
using namespace std;
int fibonnaci_recursion(int n)
{
    if (n==1 || n==0)
    {
        return n;
    }
    int ans=fibonnaci_recursion(n-1)+fibonnaci_recursion(n-2);
    return ans;    
}
int fibonnaci_bottom_up(vector<int> dp,int n)
{
    dp[0]=0;
    dp[1]=1;

    for (int i = 2; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];
    
}
int fibonnaci_dp_topDown(vector<int> dp,int n)
{
    if (n==1 || n==0)
    {
        return n;
    }
    if (dp[n]!=-1)//step3
    {
        return dp[n];
    }

    dp[n]=fibonnaci_dp_topDown(dp,n-1)+fibonnaci_dp_topDown(dp,n-2);   //step2
    return dp[n];
}
int space_optimization(int n)
{
    int prev2=0;
    int prev1=1;
    int curr;
    for (int  i = 2; i <= n; i++)
    {
            curr=prev2+prev1;
            prev2=prev1;
            prev1=curr;
    }   
    return curr ;
}
int main()
{
    int n=6;
    vector<int> temp(n+1,-1);  //step1
    int ans=fibonnaci_recursion(n);
    int ans1=fibonnaci_dp_topDown(temp,n);  
    int ans2=fibonnaci_bottom_up(temp,n);
    int ans3=fibonnaci_dp_topDown(temp,n);
    int ans4=space_optimization(n);
    cout<<ans4;
    return 0;
}