#include<iostream>
#include<vector>
using namespace std;
int Binary_search1(vector<int> v,int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+(end-start))/2;
    cout<<mid;

    while (start<=end)
    {
        if (v[mid]==target)
        {
            return mid;
        }
        else if (v[mid]<target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
        mid=start+(end-start)/2; 
    
    }
    
    return -1;
}

int main()
{
    vector <int> v{1,2,3,6,9,10};
    int size=v.size();
    // cout<<size;
    int result=Binary_search1(v,size,10);
    cout<<result;
} 

