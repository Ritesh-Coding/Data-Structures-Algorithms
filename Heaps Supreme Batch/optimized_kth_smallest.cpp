#include<iostream>
#include<queue>
using namespace std;
int kth_smallest(int arr[],int n,int k)   //here we have the same time complexity but we have different space complexity  as o(k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }

   for (int i = k; i < n; i++)
   {
         if (arr[i]<pq.top())
         {
            pq.pop();
            pq.push(arr[i]);
         }
     
         
   }
   int ans=pq.top();
   return ans;   
    

}
int main()
{
    
    int arr[] ={3,11,6,9,4,12,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=6;
    int ans=kth_smallest(arr,n,k);
    cout<<ans;
    
    return 0;
}