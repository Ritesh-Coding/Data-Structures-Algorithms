#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,22,15,10,22};   
    bool flag=0;
    
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)  //this is the first method
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                cout<<"First repeating element is "<<arr[i];
                flag=1;

                // exit(0);                         
                break;
            }
            
        }
        if (flag==1)
        {
            break;
        }
        
        
    }
    

    //second method is used to create an temporary element and sort it using merge sort 
    //now count the occurenece of each element and if first occurence is 2 then print it

    //third using hash is left 
    
    
    

    return 0;
}