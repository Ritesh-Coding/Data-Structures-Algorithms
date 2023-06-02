#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    queue<int> q1;
    q1.push(5);
    q1.push(6);
    q1.push(7);
    q1.push(8);
    q1.push(9);
    q1.push(10);

    stack<int> s;  //here we first of all put all the elemenets in a stack
    while (!q1.empty())
    {
         int temp=q1.front();
         q1.pop();
         s.push(temp);
    }

    while (!s.empty())         //from stack we again put it into the queue
    {
        int temp=s.top();
        s.pop();
        q1.push(temp);
    }

    while (!q1.empty())    //printing the queue
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    
    


    return 0;
}