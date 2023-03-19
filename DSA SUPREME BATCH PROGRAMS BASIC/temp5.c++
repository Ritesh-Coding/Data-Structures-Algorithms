#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    // cout<<size;
    int n=size+1;
    // cout<<n;
    int total=(n)*(n+1)/2;
    // cout<<total;
    for (int i = 0; i < size; i++)
    {
        total-=arr[i];

    }
    cout<<total;
    
    return 0;
}