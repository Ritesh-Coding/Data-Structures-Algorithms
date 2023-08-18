#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int signum(int a,int b)
{
    if(a==b)
        return 0;

     if(a>b)
        return 1;
    
     if(a<b)
        return -1;
    
}
void median_in_stream(double &median,priority_queue<int> &maxheap,priority_queue<int,vector<int>,greater<int>> &minheap,int element)
    {
        switch (signum(minheap.size(),maxheap.size()))
        {
        case 0:
            if (element>median)
            {
                minheap.push(element);
                median=minheap.top();
            }
            else
            {
                maxheap.push(element);
                median=maxheap.top();
            }
            
            break;

        case 1:
            if (element>median)
            {
                int mintop=minheap.top();
                minheap.pop();
                maxheap.push(mintop);
                minheap.push(element);
                median = (minheap.top() + maxheap.top())/2.0;
            }
            else
            {
                maxheap.push(element);
                median = (minheap.top() + maxheap.top())/2.0;
            }
            
            break;

        case -1:
            if (element>median)   //element bada hota h na median se to minheap m he dalna h
            {
                minheap.push(element);
                median=(minheap.top()+maxheap.top())/2.0;
            }
            else
            {
                int maxtop=maxheap.top();
                maxheap.pop();
                minheap.push(maxtop);
                maxheap.push(element);
                median = (minheap.top() + maxheap.top())/2.0;
            }
            
             break;
        
 
        }
    }
int main()
{
    int arr[12] = {5,15,1,3,2,8,7,9,10,6,11,4};
        int n = 12;

    double median=0;
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>>  minheap;


    

    for (int i = 0; i < 12; i++)
    {
        int element=arr[i];
       
        median_in_stream(median,maxheap,minheap,element);
        cout << "arr[i]->median:  " << median << endl;


    }
    



    return 0;
}




