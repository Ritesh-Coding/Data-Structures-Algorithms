#include<iostream>
using namespace std;
void solve1(int arr[],int i,int n,int x,int &first_index)
{
    if(i>=n)
        return ;
    if (arr[i]==x)
    {
        first_index=i; 
        return;
    }
    cout<<arr[i]<<" ";
    
    solve1(arr,i+1,n,x,first_index);
}
void solve(int arr[],int i,int n,int x,int &last_index)
{
    if(i>=n)
        return ;
    if (arr[i]==x)
    {
        last_index=i; 
    }
    cout<<arr[i]<<" ";
    
    solve(arr,i+1,n,x,last_index);
}
int main()
{
    
    int arr[]={1,2,3,5,5,5,5,5,67,123,125};
    int x=5;
    int i=0;
    int first_index=0;
    int last_index=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    solve(arr,i,n,5,last_index);
    solve1(arr,i,n,5,first_index);
    cout<<endl;
    cout<<"First index"<<first_index<<endl;
    cout<<"last Index "<<last_index;
    
    
}