#include<iostream>
using namespace std;
bool isPrime(int n)
{
    // int flag=1;
    for (int i = 2 ; i <n; i++)
    {
         if(n%i==0)
         {
            
            return false;
            //  flag=0;
            //  break;

         }
        
    }
    // return flag;
    return true;;
    
}
int main()
{
    
    int n=21;
    
    if(n==1)
     cout<<"It is neither prime nor composite";
    else
    {
        for (int i = 2 ; i <n ; i++)
        {
          if(isPrime(i))
          {
            cout<<i<<" Prime no\n";
          }    
        }            
    } 


}