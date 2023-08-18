#include<iostream>
using namespace std;
int main()
{
    int k=0,l=0,m=3,n=4;
    int arr[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                   };
    while (k<m && l<n)
    {
        for (int i = k; i <m; i++)
        {
            cout<<arr[i][l]<<" ";
        }
        
      l++;
      for (int i = m-1; i >= k; i--)
      {
            cout<<arr[i][l]<<" ";
      }
      l++;
        for (int i = k; i < m; i++)
        {
            cout<<arr[i][l]<<" ";
        }
        l++;
        for (int i = m-1; i >=k; i--)
        {
            cout<<arr[i][l]<<" ";
        }
        l++;

      
    }
    
    return 0;
}