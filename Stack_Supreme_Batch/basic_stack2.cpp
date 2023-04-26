#include <iostream>
using namespace std;
class stack
{
    public:   //here there is no indexing as we define this as private and make all the functions as public
    // properties
    int top;
    int size;
    int *arr;

    stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions or behaviour
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "stack Overlow ";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "cannot delete as stack underflow";
        }
        else
        {
            top--; // here we have to just move the top pointer omly        }
        }
    }

        int getTop()
        {
            if (top == -1)
            {
                cout << "Stack is empty ";
            }
            else
            {
                return arr[top];
            }
        }

        int getsize()
        {
            return top + 1;
        }

        bool isEmpty()
        {
            if (top == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    };

    int main()
    {
        stack s(5);
        s.push(45);

        s.push(65);


        cout<<"The  stack is empty:--> "<<s.isEmpty()<<endl;
        while (!s.isEmpty())
        {
             cout<<s.getTop()<<" ";
             s.pop();

        }
        cout<<endl<<"The size of the stack is :--> "<<s.getsize();
         cout<<"The  stack is empty:--> "<<s.isEmpty()<<endl;

        return 0;
    }