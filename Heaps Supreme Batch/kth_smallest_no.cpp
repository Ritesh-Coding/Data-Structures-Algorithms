#include<iostream>
#include<queue>
using namespace std;   //here we have the time complexity as o(k) but the space complexity  cahnges as o(n)
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;  //this we have done using the min heap
    int arr[]={3,11,6,9,4,12,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i <n; i++)
    {
        pq.push(arr[i]);
    }


    int k=4;
    for (int i = 1; i <k; i++)
    {
        pq.pop();
    }

    cout<<pq.top();
    
    
    return 0;
}
