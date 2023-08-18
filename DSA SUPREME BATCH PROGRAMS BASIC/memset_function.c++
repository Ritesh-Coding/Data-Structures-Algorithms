#include <bits/stdc++.h>
using namespace std;
int main()
{                              // It is useful for filling a number of bytes with a given value starting from a specific memory location. 
    int arr[]={1,5,69,8}; 
    memset(arr,-1,sizeof(arr));  //it works for only 0 and -1  //memset comes under <cstring> header filevector
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}