#include<iostream>
using namespace std;
class Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size=size;
        arr = new int[size];
        front =0;
        rear=0;

    }

    void push(int data)
    {
        if(rear==size)
        {
            cout<<"Cannot be pushed as queue is overflow";
        }
        else
        {
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(rear==front)
        {
            cout<<"Cannot be popped as stack is empty";
        }
        else
        {
            arr[front]=-1;
            front++;
            if (front==rear)
            {
                rear=0;
                front=0;
            }
            
        }
    }
    int getfront()
    {
        if(rear==front)
        {
            cout<<"Queue is empty";
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if (front==rear)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    int getsize()
    {
        return rear-front;
    }
};
int main()
{
    Queue q(10);
    q.push(5);
    // q.push(10);
    // q.push(56);
    // q.push(78);

    cout<<"Size of the queue is :"<<q.getsize();
    q.pop();
    q.pop(); 
     cout<<"Size of the queue is :"<<q.getsize();

     if (q.isempty())
     {
        cout<<"Empty h bhai";
     }
     else
     {
        cout<<"Empty nhi h bhai";
     }
     

    return 0;
}