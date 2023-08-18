#include<iostream>
using namespace std;
int find_missing(int arr[],int n)
{
    int i;
    int temp[n+1];
    for (int i = 0; i <=n ; i++)
    {
       temp[i]=0;
    }
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]-1]=1;
    }
    int ans;
    for (int i = 0; i <= n; i++)
    {
        if (temp[i]==0)
        {
            ans=i+1;
        }
        
    }
    cout<<ans;
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9}; //works  for no greater than 0   //not a good method
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=find_missing(arr,n);

    return 0;
}