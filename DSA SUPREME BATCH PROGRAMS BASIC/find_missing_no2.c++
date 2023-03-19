#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
    int n=size+1;
    int total=(n)*(n+1)/2;
    for (int i = 0; i < n; i++)
    {
        total-=arr[i];

    }
    cout<<total;
    
    return 0;
}