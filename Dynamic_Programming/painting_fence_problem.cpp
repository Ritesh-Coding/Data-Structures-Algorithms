#include<iostream>   //probrem has a condition that faces does not have the more than 2 color consequently
#include<vector>
using namespace std;
long long solveusingMem(int n, int k, vector<int> &dp) {
    static int mod = 1e9 + 7;
    if (n == 1) {
        return k;
    }
    if (n == 2) {
        return (k + k * (k - 1));
    }
    if (dp[n] != -1)
        return dp[n] % mod; 

     dp[n] = ((solveusingMem(n-2,k,dp)*(k-1))%mod + (solveusingMem(n-1,k,dp)*(k-1))%mod);
     return dp[n];
}

int solveusingrecursion(int n,int k)
{
    if (n==1)
    {
        return k;
    }
    if (n==2)
    {
        return (k+k*(k-1));  //this formula we have obtained from the oberservation
    }

    int ans=((solveusingrecursion(n-2,k)+solveusingrecursion(n-1,k))*(k-1));

    return ans;    
    
}
int solveusingTab(int n,int k)
{
    vector<int> dp(n+1,-1);
    dp[1]=k;
    dp[2]=(k + k * (k - 1));

    for (int i = 3; i <=n; i++)
    {
        dp[i]=(dp[i-2]+dp[i-1])*(k-1);
    }
    return dp[n];
    
}
int solveusingspaceOptimization(int n,int k)
{
    int prev2=k;
    int prev1=(k + k * (k - 1));

    for (int i = 3; i <=n; i++)
    {
        int curr=(prev2 + prev1)*(k-1);
        prev2=prev1;
        prev1=curr; 
        
    }
    return prev1;;
}
int main()
{
    int n=4;   //there are total 4 faces 
    int k=3;   //coors are red,green,blue suppose
    vector<int> dp(n+1,-1);
    // int ans= solveusingrecursion(n,k);
    // long long ans = solveusingMem(n,k,dp);
    // int ans = solveusingTab(n,k);
    int ans = solveusingspaceOptimization(n,k);
    cout<<ans;
    return 0;
} 