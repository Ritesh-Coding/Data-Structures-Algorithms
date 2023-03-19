#include<iostream>
using namespace std;
int main()
{
    int arr1[]={1,2,3,4,5,6,45};
    int arr2[]={21,22,30,40,45,78,98};
    int arr3[]={45,98,78};

    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=sizeof(arr3)/sizeof(arr3[0]);

    int i=0,j=0,k=0;
    while (i<n1 && j<n2 &&  k<n3)
    {
        if (arr1[i]==arr2[j]  && arr2[j]== arr3[k])
        {
            cout<<arr1[i];
            i++;
            j++;
            k++;
        }
        
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else if (arr2[j]<arr3[k])
        {
            j++;
        }
        
        else
        {
            k++;
        }
        
        
    }
    

    return 0;
}
