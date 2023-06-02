#include<iostream>

using namespace std;
class Circular_Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Circular_Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int data)
    {
        if (front==-1) //single element case
        {
            front=0;
            rear=0;
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0 )  //circular nature
        {
            rear=0;
            arr[rear]=data;
        }
        else if (rear==front-1 || rear==size-1 && front==0 ) //queue full
        {
            cout<<"The queue is full,cannot insert";
        }
        else //normal flow
        {
            rear++;
            arr[rear]=data;
        }
        
    }
    void pop()
    {
        if(front==-1)  //empty check
        {
            cout<<"Cannot pop elements as queue is empty";
        }
        else if (front==rear)   //single element
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        else if(front==size-1)  //circular nature
        {
            front=0;
        }
        else  //normal flow
        {
            front++;
        }
        
    }
    int getSize()
    {
        if (front>rear)
        {
            return size-(front-rear-1);
        }
        else
        {
            return rear-front+1;
        }
    }

    bool isEmpty()
    {
        if (front==-1)
        {
            return false;
        }
        else
        {
            return true;
        }
        
    }

    int getfront()
    {
        if (front==-1)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
        
    }
    int getrear()
    {
        if (rear==-1)
        {
            return -1;
        }
        else
        {
            return arr[rear];
        }
        
    }

};
int main()
{
    Circular_Queue q(10);
    cout<<"Hello world";

    return 0;
}