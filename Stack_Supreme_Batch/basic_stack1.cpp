#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(45);
    s.push(55);
    s.push(65);
    s.push(78);

    cout<<"sizeof the stack is: "<<s.size();
    cout<<endl;

    while (!s.empty())
    {
        cout<<"The top is : "<<s.top()<<endl;
        s.pop();
    }
    

    if(s.empty())
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"Stack is not empty"<<endl;
    }




}
