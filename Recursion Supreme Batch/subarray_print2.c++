#include<iostream>
#include<vector>
using namespace std;
void print_subsequence(vector<int> arr,int start , int end)
{
    if (end==arr.size())
    {
        return;
    }
    for (int i = start; i <= end; i++)
    {
         cout<<arr[i]<<" ";
    }
    cout<<endl;
    print_subsequence(arr,start,end+1);
    
    
}
void print_subarray(vector<int> arr)
{
    
    for (int start = 0; start < arr.size(); start++)
    {
        int end=start;
        
            print_subsequence(arr,start,end);
    }
    
}
int main()
{
    vector<int> arr{1,2,3,4};

    print_subarray(arr);
    return 0;
}