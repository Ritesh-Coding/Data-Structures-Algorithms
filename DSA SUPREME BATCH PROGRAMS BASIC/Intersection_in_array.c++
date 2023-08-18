#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
     vector<int> arr1{1,2,2,4,5,6};
     vector<int> arr2{2,2,9,8};
     map<int,int> m;
     vector<int> ans;

     for (int i = 0; i < arr1.size(); i++)
     {       
        m[arr1[i]]++;
     }
     for (int i = 0; i < arr2.size(); i++)
     {
        auto it = m.find(arr2[i]);
        if (it!=m.end() && it->second  >0)
        {
            ans.push_back(arr2[i]);
            it->second--;
        }
        
     }
     
    for (auto element :ans )
    {
        cout<<element;
    }
    
     
}