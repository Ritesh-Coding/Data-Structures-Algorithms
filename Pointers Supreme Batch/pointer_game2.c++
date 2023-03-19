#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr];


    // arr=arr+2;   //directly we cannot change the base address of the array
    cout<<endl;
    int *ptr = arr;  //with the help of pointers we can change the base address of the array
    ptr=ptr+2;
    cout<<ptr[0];
    
    return 0;
}