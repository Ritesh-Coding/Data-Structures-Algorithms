#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int Binary_search1(vector<int> v,int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+(end-start))/2;
    // cout<<mid;
    int ans=-1;
    while (start<=end)
    {
        if (v[mid]==target)
        {
            ans=mid;
            end=mid-1;
            
        }
        else if (v[mid]>target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
        mid=start+(end-start)/2; 
    
    }
    
    return ans;
}

int main()
{
    vector <int> v{1,2,3,3,6,9,10};
    int size=v.size();
    
   int result= Binary_search1(v,size,6); 
    
    // if(binary_search(v.begin(),v.end(),11))//using inbuilt function
    
    // {
    //     cout<<"present";
    // }
    // else
    // {
    //     cout<<"Not present\n";
    // }
    
    
    if (result==-1)
    {
        cout<<"Element Not Found";
    }
    else
    {
    
    cout<<"Element Found at "<<result<<" position";
    }
} 

