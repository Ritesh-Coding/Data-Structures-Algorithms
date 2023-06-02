#include<iostream>
#include<queue>

using namespace std;
void reverse(queue<int> &q1)
{
    if (q1.empty())
    {
        return;
    }

    int front_element=q1.front();
    q1.pop();
    
    //recursion call
    reverse(q1);

    //backtracking game 
    q1.push(front_element);
    
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

    reverse(q1);
    while (!q1.empty())    //printing the queue
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
    
    
    


    return 0;
}