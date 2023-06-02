#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prev_smaller_element(vector<int> &v)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        int curr= v[i];

        while (s.top()!=-1 && v[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();

        s.push(i);
         
    }
    return ans;
    
}
vector<int> next_smaller_element(vector<int> &v)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(v.size());
    for (int i = v.size()-1; i >=0 ; i--)
    {
        int curr= v[i];

        while (s.top()!=-1 && v[s.top()]>=curr)
        {
            s.pop();
        }
        ans[i]=s.top();

        s.push(i);
         
    }
    return ans;
    
}

int rectangle_largest_area(vector<int> heights)
{
     vector<int> prev= prev_smaller_element(heights);
     vector<int> next= next_smaller_element(heights);
     int max_area= INT32_MIN;

     for (int i = 0; i < heights.size(); i++)
     {
        if (next[i]==-1)  //rememeber this condition
        {
            next[i]=heights.size();
        }
        int height = heights[i];

        int width= next[i]-prev[i]-1;
        int ans1= height*width;

        max_area=max(max_area,ans1);
        
     }
     
    return max_area;

}
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(45);
    v.push_back(1);
    v.push_back(9);

    int ans = rectangle_largest_area(v);
    cout<<ans;
    return 0;
}