#include<iostream>
#include<vector>
using namespace std;
int unique_element(vector<int> arr,int size)
{
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}

int main()
{
    vector<int> arr{5,6,10,5,6  };

    int ans=unique_element(arr,5);
    cout<<"Unique element is :--> "<<ans;
    return 0;
}