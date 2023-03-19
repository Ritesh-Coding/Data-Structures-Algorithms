//setting a bit means 0 | 1 =1      1 | 1 =1
//clearing a bit means 0 & 0 =0     1 &0=0
//toggling a bit means 0^1=1   1^1=0 
#include<iostream>
using namespace std;
int main()
{
    
    int n,bit_set,mask,ans; 
    cout<<"Enter the number:--> ";
    cin>>n;
    cout<<"Enter the kth bit :--> ";
    cin>>bit_set;
    mask=1<<bit_set;
    ans=n|mask;


    
    cout<<ans;
    return 0;

    
}