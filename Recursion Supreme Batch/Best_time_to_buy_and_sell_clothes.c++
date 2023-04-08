#include<iostream>
using namespace std;
int find_max(int arr[],int n,int i,int& maxi,int ans)
{
    if(i>=n)
    {
        return ans;
    }
    if (arr[i]>maxi)
    {
        maxi=arr[i];
         ans=i;
        
    }

    return find_max(arr,n,i+1,maxi,ans);
    
}
int find_min(int arr[],int n,int i,int& mini,int ans)
{
    if(i>=n)
    {
        return ans;
    }
    if (arr[i]<mini)
    {
    
        mini=arr[i];
        ans=i;
    }

    return find_min(arr,n,i+1,mini,ans);
    

}

int main()
{
    int arr[]={2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int maxi=INT16_MIN;
    int mini=INT16_MAX;
    int min_index=0;
    int max_index=0;


    
    int min_ans=find_min(arr,n,i+1,mini,min_index);
    cout<<min_ans<<endl;

    int max_ans=find_max(arr,n,min_ans+1,maxi,max_index);
    cout<<max_ans<<endl;
    if (max_ans==0)
    {
        cout<<0;
    }
    else
    {
        cout<<arr[max_ans]-arr[min_ans];
    }
    return 0;
}