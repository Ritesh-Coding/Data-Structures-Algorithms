#include<iostream>
using namespace std;
int main()
{
    int arr[]={6,5,8,2,1};
    int size=5;
    int start=0,end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);  //1st method
        // int temp=arr[start];       //  2nd
        // arr[start]=arr[end];
        // arr[end]=temp;
        //   arr[start]=arr[start]+arr[end];
        //   arr[end]=arr[start]-arr[end];
        //   arr[start]=arr[start]-arr[end];
        
        start++;
        end--;
 
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
   
} 