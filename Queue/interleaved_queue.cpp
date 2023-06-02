#include<iostream>
#include<queue>
using namespace std;
void interleaved_queue(queue<int> &q1)
{
    queue<int> q2;
    int n=q1.size();
    int count=0;
    while (!q1.empty())  //here first we make another queue and push half of the elements of the first queue
    {
         int element = q1.front();
         q1.pop();

         q2.push(element);
         count++;

         if (count==n/2)
         {
            break;
         }
    }

    while (!q1.empty()  && !q2.empty())  //now we take element from the second queue and placed it into the original queue and take original queue by pop its elements again push into the original queue and continue this process 
    {
        int element1=q2.front();
        q2.pop();
        q1.push(element1);

        int element2=q1.front();
        q1.pop();
        q1.push(element2);
    }

    if (n&1)   //here if the queue is odd then 1 element is always left in the original queue 
    {
        int element=q1.front();
        q1.pop();
        q1.push(element);
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
    q1.push(11);

    interleaved_queue(q1);

    while (!q1.empty())
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }
   
    return 0;
}