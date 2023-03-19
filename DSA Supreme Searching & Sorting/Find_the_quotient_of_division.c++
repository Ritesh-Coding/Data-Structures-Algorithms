#include<iostream>
using namespace std;
  float find_quotient(int divident,int divisor)
  {
 
    int start=0;
    int end=abs(divident);
    // cout<<end;
    int mid=start+(end-start)/2;
    // cout<<mid;
    int ans=0;
    if (divisor==0)
    {
        return INT16_MIN;
    }
    
    while (start<end)
    {
          
        
        if (mid*abs(divisor)==abs(divident))
        {
            ans= mid;
            break;

        }
        else if (mid*abs(divisor)<abs(divident))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=start+(end-start)/2;
        
    }
     int precision;
         cout << "Enter the number of floating digits in precison "<<endl;
        cin >> precision;

        double step = 0.1;
        double finalAns = abs(ans);
        for(int i=0; i<precision; i++) {

            for(double j=finalAns; j*abs(divisor)<=abs(divident); j = j + step) {
                finalAns = j;
            }
            step = step / 10;
        }
        // cout<<finalAns;
    
   if (divisor>0 && divident>0 || divisor<0 && divident <0)
   {
        return finalAns;
   }
   
    return -finalAns;
}
int main()
{
    int divident=55;
    int divisor=-2;
    double ans1=find_quotient(divident,divisor);
    // cout<<ans;
    
        
    
     if(ans1==INT16_MIN)
    {
        cout<<"Any number can't be divided by zero";
    }
    else{
    
        cout << "Final ans is. "<< ans1 << endl;
    }
  
    return 0;
}