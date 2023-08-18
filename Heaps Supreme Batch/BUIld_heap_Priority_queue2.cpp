#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq; //this is an implementation for the min heap  //here with the helpof the stl we made the heap
    pq.push(56);
    pq.push(30);
    pq.pop();
    cout<<pq.top();

    if(pq.empty())
    {
        cout<<"This is an empty queue";
    }
    else
    {
        cout<<"This is not empty";
    }




    return 0;
}