#include<iostream>
using namespace std;
void solve(int arr[])
{ 
    arr[0]=56;  //here arr is a pointer having pointer havig base address inside and  another address of the pointer 
                //hence it size is 8
}
int main()
{
    int arr[10]={1,2,3,4};

    //here it is an array havinf size 40;
    solve(arr);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i] << " ";
    }
    

}