#include <iostream>
#include <vector>
using namespace std;

int main()   
{
   vector<int> arr{0,2,1,2,1,2,0,1,2,0};
    int start=0,mid=0,end=arr.size()-1;    //here as only 0 and 2 we have to set and therefore 1 is set automatically
                                            //000000001111111111222222222222222   
    while (mid<=end)
    {
        if(arr[mid]==1)
        {
            mid++;
        }
        else if (arr[mid]==0)
        {
            swap(arr[start],arr[mid]);
            start++;
            mid++;
            
        }
        else if (arr[mid]==2)
        {
            swap(arr[mid],arr[end]);
            end--;
        }
        
        
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    
    


    return 0;
}