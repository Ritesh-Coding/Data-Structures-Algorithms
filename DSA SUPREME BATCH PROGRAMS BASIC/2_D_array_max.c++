#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,98,9}};
   int maxi=INT16_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
             if (maxi<arr[i][j])
             {
                maxi=arr[i][j];
             }
             
        }
        
    }

    cout<<maxi;
    
}