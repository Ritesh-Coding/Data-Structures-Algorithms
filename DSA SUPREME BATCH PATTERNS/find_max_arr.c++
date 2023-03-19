#include<iostream>
using namespace std;
// int main()
// {
//     int arr[]={5,8,9,10,44,78,989};
//     int maxi=INT16_MIN;
//     for (int i = 0; i < 7; i++)
//     {
//         if (arr[i]>maxi)
//         {
//             maxi=arr[i];
//         }
        
//     }
//     cout<<maxi;
    
// } 

int main()   //to find minimum
{
    int arr[]={5,8,9,10,44,78,989};
    int mini=INT16_MAX;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]<mini)
        {
            mini=arr[i];
        }
        
    }
    cout<<mini;
    
} 


