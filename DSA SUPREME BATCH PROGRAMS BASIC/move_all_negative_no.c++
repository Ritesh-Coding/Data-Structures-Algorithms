#include<iostream>
using namespace std;
int main()
{
    int arr[]={-98,0,-6,-8,2,6,78,98,89};
    int start=0,end=8;

    while(start<=end)
    {
        if (arr[start]>0)
        {
            start++;
            
        }
        else if (arr[start]==0)
        {
            start++;
        }
        
        else 

        {
            swap(arr[start],arr[end]);
            end--;
        }
    }
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
