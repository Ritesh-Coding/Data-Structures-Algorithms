#include<iostream>
using namespace std;
void find_max(int arr[],int n,int i,int& maxi)
{
    if(i>=n)
    {
        return ;
    }
    if (arr[i]>maxi)
    {
        maxi=arr[i];
    }

    return find_max(arr,n,i+1,maxi);
    
}
int main()
{
    int arr[]={1,2,3,14,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int maxi=INT8_MIN;
    find_max(arr,n,i,maxi);
    cout<<maxi;
    return 0;
}