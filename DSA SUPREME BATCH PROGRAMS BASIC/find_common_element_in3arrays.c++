#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,1};
    int arr2[]={5,6,7,8,9,1,1,1};
    int arr3[]={7,8,1,6,1};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for (int k = 0; k < n3; k++) 
            {
                if(arr1[i]==arr2[j])
                {
                    if (arr2[j]==arr3[k])
                    {
                        cout<<arr1[i];
                        arr2[j]=-1;
                        arr3[k]=-2;
                        
                   break;
                    }
                  
                }
            }
            
        }
        
    }
    
    return 0;
}