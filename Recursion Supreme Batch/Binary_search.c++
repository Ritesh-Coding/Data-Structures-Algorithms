#include<iostream>
#include<vector>
using namespace std;
int Binary_search(vector<int>& arr,int start, int end,int& key)
{
    if(start>end)
        return -1;
    int mid=start+(end-start)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    if (arr[mid]<key)
    {
        Binary_search(arr,mid+1,end,key);
    }
    else
    {
        Binary_search(arr,start,mid-1,key);
    }
}

int main()
{
    vector<int>v{0,1,5,6,8,9,74};
    int start=0;
    int end=v.size();
    int key=9;

    int ans=Binary_search(v,start,end,key);
    cout<<ans;

    return 0;
}