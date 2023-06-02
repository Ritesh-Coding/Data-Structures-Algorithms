#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void next_smaller(stack<int> &st,vector<int> &v)
{
   vector<int> ans(v.size());
   for (int i = v.size()-1; i >= 0; i--)
   {
       int curr=v[i];
        while(st.top()>=curr)
        {
         st.pop();
        }
        
        ans[i]=st.top();
        
        st.push(curr);
        
   }
   cout<<"The next smaller element of the array is :--> ";
   for (int i = 0; i < ans.size(); i++)
   {
      cout<<ans[i] << " ";
   }
   
   
}
void prev_smaller(stack<int> &st,vector<int> &v)
{
   vector<int> ans(v.size());
   for (int i = 0; i < v.size(); i++)
   {
       int curr=v[i];
        while(st.top()>=curr)
        {
         st.pop();
        }
        
        ans[i]=st.top();
        
        st.push(curr);
        
   }
   cout<<"\nThe previous smaller element of the array is :--> ";
   for (int i = 0; i < ans.size(); i++)
   {
      cout<<ans[i] << " ";
   }
   
   
}
int main()
{
   stack<int> st;
   st.push(-1);
   vector <int> v;
   v.push_back(2);
   v.push_back(1);
   v.push_back(4);
   v.push_back(3);
  
   next_smaller(st,v);

   prev_smaller(st,v);
  
   
}
