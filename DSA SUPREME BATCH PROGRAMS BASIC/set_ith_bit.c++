//setting a bit means 0 | 1 =1      1 | 1 =1   //0 ko 1 kr dega
//clearing a bit means 0 & 0 =0     1 &0=0    //1 kok zero kr dega
//toggling a bit means 0^1=1   1^1=0          //
#include<iostream>
using namespace std;
int main()
{
    
    int n,bit_set,mask,ans; 
    cout<<"Enter the number:--> ";
    cin>>n;
    cout<<"Enter the kth bit :--> ";
    cin>>bit_set;                   //here setting the kth bit means that 10->1010
                                    //kth bit 0 then 1011
                                    //kth bit 1 then 1010
                                    //kth bit 2 then 1110
                                    //kth bit 3 then 1010
    mask=1<<bit_set;
    ans=n|mask;


    
    cout<<ans;
    return 0;

    
}