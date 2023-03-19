#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={4,2,3,4,6};

    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n];
    for (int i = 0; i <n ; i++)
    {
        temp[i]=arr[i];
    }

    sort(temp,temp+n);

    for (int i = 0; i < n; i++)
    {
        
        
    }
    
    

    return 0;
}