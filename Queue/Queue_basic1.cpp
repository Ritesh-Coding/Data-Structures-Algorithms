#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);


    cout<<"size of the queue is :--> "<<q.size();
    q.pop();
    q.pop();
    cout<<"size of the queue is :--> "<<q.size();
    cout<<"\n"<<q.front();
    cout<<q.back();

    return 0;
}