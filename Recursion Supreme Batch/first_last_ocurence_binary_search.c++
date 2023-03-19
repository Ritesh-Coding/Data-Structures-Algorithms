#include<iostream>
#include<vector>
using namespace std;
int first_occurence(vector<int>& arr,int start, int end,int& key,int ans)
{
    
    if(start>end)
        return  ans;
    int mid=start+(end-start)/2;
    if (( arr[mid]==key))
    {
        ans= mid;
        first_occurence(arr,start,mid-1,key,ans);
    }
    else if (arr[mid]<key)
    {
        first_occurence(arr,mid+1,end,key,ans);
    }
    else
    {
        first_occurence(arr,start,mid-1,key,ans);
    }
}
int last_occurence(vector<int>& arr,int start, int end,int& key,int ans)
{
    
    if(start>end)
        return ans;
    int mid=start+(end-start)/2;
    if ((arr[mid]==key))
    {
         ans= mid;
        last_occurence(arr,mid+1,end,key,ans);
        
    }
    else if (arr[mid]<key)
    {
        last_occurence(arr,mid+1,end,key,ans);
    }
    else
    {
        last_occurence(arr,start,mid-1,key,ans);
    }
}

int main()
{
    vector<int>v{0,2,3,3,3,3,3,3,3,3,5,5,5,10};
    int start=0;
    int end=v.size()-1;
    int ans1=-1;

    // cout << end;
    
    int key=3;

    int ans=first_occurence(v,start,end,key,ans1);
    cout<<ans;
    int ans2=last_occurence(v,start,end,key,ans1);
    cout<<ans2;

    return 0;
}