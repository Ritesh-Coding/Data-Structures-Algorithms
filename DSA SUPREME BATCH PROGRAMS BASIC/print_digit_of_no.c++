#include<iostream>
using namespace std;
// int main()    //in reverse order the number are print
// {    
//     int n=623;
//     int ans=0;
//    while (n!=0)
//    {
//       int rem=n%10;
//       ans=ans*10+rem;
//         n=n/10;
//    }
//    cout<<ans;

// }

int main()
{
    int A[]={6,2,3};
    int ans=0;
    for (int i = 0; i < 3; i++)
    {
        
        ans=ans*10+A[i];
    }
    cout<<ans;
    
    {
        
    }
    
}