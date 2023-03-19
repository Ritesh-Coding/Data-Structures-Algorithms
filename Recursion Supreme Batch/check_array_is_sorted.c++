#include<iostream>
using namespace std;
bool checksorted(int arr[],int& n,int i)
{
    if (i==n-1)
    {
        return true;
    }

    if (arr[i]>arr[i+1])
    {
        return false;
    }
    return checksorted(arr,n,i+1);
    
}

int main()
{
    int arr[]={1,5,67,7,89};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    if(checksorted(arr,size,i))
    {
        cout<<"Array is sorted";
    }
    else
    {
        cout<<"Array is not sorted";
    }
}