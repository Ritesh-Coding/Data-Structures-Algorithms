#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;  //this is an implementation of max heap

    pq.push(5);
    // cout<<pq.top();
    pq.push(58);
    cout<<pq.top();


    
    return 0;
}
