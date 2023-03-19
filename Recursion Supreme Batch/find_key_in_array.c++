#include<iostream>
using namespace std;
bool find_key(int arr[],int& n,int i,int &key)
{
    if(i>=n)
    {
        return false;
    }
    if(arr[i]==key)
        return true;

    return find_key(arr,n,i+1,key);
}
int main()
{
    int arr[]={1,2,6,8,9,7};
    int key=1;
    int i=0;
    int n= sizeof(arr)/sizeof(arr[0]);
    bool ans = find_key(arr,n,i,key);
    cout<<ans;   //return true or false 
    return 0;
}