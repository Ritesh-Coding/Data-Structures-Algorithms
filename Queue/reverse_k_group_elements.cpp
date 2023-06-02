#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse_k_nodes(queue<int> &q1,int &k)
{
    int count=0;
     stack<int> s;  //here we first of all put k elemenets in a stack
     int n=q1.size();
     if(k<=0 || k>n)
     {
        return;
     }

    while (!q1.empty())
    {
        int front_element=q1.front();
        q1.pop();

        s.push(front_element);
        count++;         //incremen the count
        if (count==k)
        {
            break;
        }
        
    }
      
    while (!s.empty())    //here we first put the k elements that is to be reverse into the stack
    {
        int top_element=s.top();
        s.pop();
        q1.push(top_element);
    }

    //there may be possibility that starting elements remain in the same position and are not reversed
    count=0;
    while(!q1.empty() && n-k!=0)  //here n-k may be zero so handle the case;
    {
        int element=q1.front();
        q1.pop();

        q1.push(element);
        count++;

        if (count==n-k)
        {
            break;
        }
    }


}

int main()
{
    
    queue<int> q1;
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.push(10);
    int k=6;
    reverse_k_nodes(q1,k);
    while (!q1.empty())
    {
         int temp=q1.front();
         cout<<temp<<" ";
         q1.pop();
        
    }
    return 0;
};