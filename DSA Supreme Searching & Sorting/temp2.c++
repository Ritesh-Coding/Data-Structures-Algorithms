#include<iostream>
#include<algorithm>
using namespace std;

int find_pivot(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while (start<end)
    {
        while (start<end)
        {
            if (arr[mid+1]<arr[size]&&arr[mid]>arr[mid+1])
            {
                return mid;
            }
            if (arr[mid-1]> 0 && arr[mid-1]>arr[mid])
            {
                return mid-1;
            }

            if (arr[mid]>=arr[start])
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
            
        }
        return start;
        
    }
    

}
int Binary_search1(int arr[] ,int start,int end,int target)
{
 
    int mid=(start+(end-start))/2;
    // cout<<mid;

    while (start<=end)
    {
        if (arr[mid]==target)
        {
            return mid;
        }
         if (arr[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
       mid=(start+(end-start))/2;
    
    }
    
    return -1;
}

int main(){

    int arr[]={7,8,9,10,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
   int  pivot_index=find_pivot(arr,size);
   int target=1;
   cout<<pivot_index;

   if (target>=arr[0] && target <=arr[pivot_index])
   {
      int ans=Binary_search1(arr,0,pivot_index,target);
      cout<<ans;
   }
   if (target>=arr[pivot_index+1] && target<=arr[size-1])
   {
     int ans=Binary_search1(arr,pivot_index+1,size-1,target);
     cout<< ans;
   }

    return 0;
}