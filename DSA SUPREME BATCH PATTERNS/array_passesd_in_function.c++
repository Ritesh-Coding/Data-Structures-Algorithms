#include<iostream>
using namespace std;
void print_array(int arr[],int size)
{
  for (int i = 0; i < size; i++)
  {
    cout<<arr[i]<<" ";
  }
  

}
void inc(int arr[],int size)
{
   arr[0]=89;
   print_array(arr,size);
}
int main()
{
    int arr[]={1,2,3};
    inc(arr,3);
    return 0;
}