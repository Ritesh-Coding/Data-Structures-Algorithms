#include<iostream>
using namespace std;
int Binary_search1(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        if (start==end)
        {
            return start;
        }
        
        if (arr[mid]==target)
        {
            return mid;
        }
        if(mid-1>=start  &&  arr[mid-1]==target)
        {
            return mid-1;
        }
        if (mid+1<=end && arr[mid+1]==target)
        {
            return mid+1;
        }

        if (arr[mid]>target)
        {
            end=mid-2;
        }
        else{
            start=mid+2;
        }
        
        mid=start+(end-start)/2;
        
    }
    return -1;

}
int main()
{
    int arr[]={10,3,40,20,50,80,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=3;
    int ans=Binary_search1(arr,size,target);
    cout<<ans;
    
} 
