#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    Node()
    {
        this->data=0;
        this->next=NULL;
            }
};
Node* start_of_loop(Node *head)
{
    if (head==NULL)
    {
        cout<<"LL is empty bro"<<endl;
        return NULL;
    }
    Node *slow=head;
    Node *fast= head;


    while (fast!=NULL)
    {
        fast=fast->next;
        if (fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if (slow==fast)
        {
             slow=head;
             break;
        }
        
      
    }

    while (slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    
    return slow;
     
}
int main()
{
    Node *head = new Node(45);
    Node* second = new Node(55);
    Node * third = new Node(66);
    Node *fourth = new Node(77);

    head->next=second;
    second->next=third;
    third->next=head;

    Node * ans=start_of_loop(head);
    cout<<ans->data;
  
    return 0;
}