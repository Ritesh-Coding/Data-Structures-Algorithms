#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,7,3,1};
    int sum=5;
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            if (sum==element+arr[j])
            {
                cout<<arr[i]<<arr[j];
                cout<<endl;
            }
            
        }
        
    }
    
}