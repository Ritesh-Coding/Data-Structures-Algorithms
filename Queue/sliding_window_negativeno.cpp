//find the first negative element in the window

#include<iostream>
#include<queue>
using namespace std;
void solve(int arr[],int k)
{
    // int n=sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    // /process first window of size k 
    for (int i = 0; i < k; i++)
    {
        if (arr[i]<0)
        {
            q.push(i);
        }
        
    }
    //remaining window ko process kro
    for (int i = k; i < 8; i++)
    {
         //answer dedo purani wondow ka 
        if (q.empty())
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<arr[q.front()]<<" ";
        }
         //out of window elements ko remove krdo
        if ((!q.empty()) && (i-q.front()>=k))
        {
            q.pop();
        }
        //check current element for insertion 
        if (arr[i]<0)
        {
            q.push(i);
        }

    }
    //answer print karonfor last window
    if (q.empty())
        {
            cout<<"0"<<" ";
        }
        else
        {
            cout<<arr[q.front()]<<" ";
        }
    
    
    
}
int main()
{
    int arr[]={-12,-1,-7,8,-15,30};
    int k=3;//window size
    solve(arr,3);
}