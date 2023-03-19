#include<iostream>
using namespace std;
void array_traversal(int arr[],int n,int i)
{ 
    if(i>=n)  //base case 
    {
        return ;
    }

    cout<<arr[i]<<" ";  //1 case 

    return array_traversal(arr,n,i+1);
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    array_traversal(arr,n,i);
    return 0;
}