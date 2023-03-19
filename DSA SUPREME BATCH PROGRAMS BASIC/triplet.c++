#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,7};
    int sum=8;
    for (int i = 0; i < arr.size(); i++)
    {
        int element=arr[i];
        for (int j = i+1; j < arr.size(); j++)
        {
            for (int k = j+1; k < arr.size(); k++)
            {
                if (sum==element+arr[j]+arr[k])
                    {
                        cout<<arr[i]<<arr[j]<<arr[k];
                        cout<<endl;
                    }
            }          
        }
        
    }
    
}