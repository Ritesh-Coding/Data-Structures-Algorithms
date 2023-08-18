#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,5};
    int size=2;
    int start=0;
    int end=size-1;

    while(start<end)
    {
        if (start==end)
        {
            cout<<arr[start];
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";   
                   
        } 
         start+=1;
         end-=1;       
       
    }
}