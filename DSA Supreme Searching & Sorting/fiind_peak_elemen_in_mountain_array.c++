#include<iostream>
using namespace std;
int peak_element(int arr[],int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    
    while (start<end)  //stop when start = end
    {
        if(arr[mid]>arr[mid+1])
        {

            end=mid;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return end; //here we can also pass start as both are in same position
}
int main()
{
    int arr[]={0,5,6,10,61,62,3,1};//it is in the form of the mountain i.e 1 line is in ascending order and another is in descending order
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=peak_element(arr,size);
    
    cout<<"Peak element is "<<arr[result];
    
}