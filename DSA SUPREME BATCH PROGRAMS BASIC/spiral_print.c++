#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={ {1,2,3,4},
                  {5,6,7,8},
                  {9,10,11,12},
                  };

    int k=0,m=3,l=0,n=4;
    while (k<m && l<n)
    {
         for (int i = l; i < n; i++)
        {
            cout<<arr[k][i]<<" ";
        }
        k++;
        for (int i = k; i < m; i++)
        {
            cout<<arr[i][n-1]<<" ";
        }
        n--;
        if (k<m)
        {
            for (int i = n-1; i >= l; i--)
        {
            cout<<arr[m-1][i]<<" ";
        }
        m--;
        }
        
        if(l<n)
        {
             for (int i = m-1; i >= k; i--)
            {
                cout<<arr[i][l]<<" ";
            }
             l++;
        
        }
       
        
    }
    
   
    

                
    return 0;
}