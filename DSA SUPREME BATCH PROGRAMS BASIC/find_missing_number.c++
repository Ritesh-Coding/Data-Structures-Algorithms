#include<iostream>
using namespace std;
int main()
{
    
    
    int arr[]={91,92,93,94,96};
    int size=sizeof(arr)/sizeof(arr[0]);
    int brr[size];
     brr[0]=arr[0];
     

     for (int i = 1; i < size; i++)
     {
       
        brr[i]=brr[0]+i;
        
     }

     int i=0,j=0;
     while (i<5 && j<5)
     {
         if (arr[i]!=brr[j])
            {
                cout<<brr[j];
                break;
            }
        i++;
        j++;
     }
     
    
     

    
}

