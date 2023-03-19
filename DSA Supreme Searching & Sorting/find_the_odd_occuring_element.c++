#include<iostream>
using namespace std;
int oddOccuring(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
   
    
    while (start<end)
    {
        if (mid%2==0)
        {
            if (arr[mid]==arr[mid+1])
                start=mid+2;
            else
                end=mid;
                  
        }
        else
        {
            if (arr[mid]==arr[mid-1])
                start=mid+1;
            else
                end=mid-1;            
        }
        
        // cout<<"ji";
        mid=start+(end-start)/2;
    }
    

   
   
    return end;
}
int main()
{
    int arr[]={1,1,2,2,3,3,4,4,3,600,600,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ans=oddOccuring(arr,size);
    cout<<arr[ans];
}
