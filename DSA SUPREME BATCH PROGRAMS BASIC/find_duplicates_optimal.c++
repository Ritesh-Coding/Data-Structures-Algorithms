 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;
int findDuplicates(vector<int>& nums) {
    //     sort(nums.begin(),nums.end());
        
    //     for(int i=0;i<nums.size()-1;i++)
    //     {
    //         if(nums[i]==nums[i+1])
    //         {
    //             return nums[i];
    //         }
    //     }



    //   return -1;]
    // int ans=-1;
    // for(int i=0;i<nums.size();i++)
    // {
    //     int index=abs(nums[i]);

    //     if(nums[index]<0)
    //     {
    //         ans=index;
    //         return ans;
    //     }
    //     nums[index]*=-1;
    // }

    // return ans;

    while (nums[0]!=nums[nums[0]])
    {
        swap(nums[0],nums[nums[0]]);
    }
    return nums[0];
    }
 int main()
 {
    vector<int> arr{1,2,3,4,3
    };
   int ans= findDuplicates(arr);    
   cout<<ans;
 }


    