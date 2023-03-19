#include<iostream>
using namespace std;
int main()
{
    int arr[]={0,5,5,6,6,7,89,98,6};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
                arr[j]=-1;
            }
            
        }
        
    }
    
    
    
    return 0;
}