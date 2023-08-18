#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    int arr1[]={56, 44 ,23 ,43, 6 ,12 ,4 ,32, 5, 3 ,3 };
    int arr2[]={6,1,2};
    for (int i = 0; i < 11; i++)
    {
        pq.push(arr1[i]);
    }   
    for (int i = 0; i < 3; i++)
    {
         pq.push(arr2[i]);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    


    

    return 0;
}