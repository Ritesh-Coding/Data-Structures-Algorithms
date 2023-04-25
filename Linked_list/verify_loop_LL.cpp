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
bool check_for_loop(Node *head)
{
    if (head==NULL)
    {
        cout<<"LL is empty bro"<<endl;
        return false;
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
            return true;
        }
        
      
    }
    return false;
     
}
int main()
{
    Node *head = new Node(45);
    Node* second = new Node(55);
    Node * third = new Node(66);
    Node *fourth = new Node(77);43 

    head->next=second;
    second->next=third;
    third->next=fourth;

    bool ans=check_for_loop(head);
    cout<<ans;
    if(ans)
    {
        cout<<"Loop h ";
    }
    else
    {
        cout<<"Loop nhi h";
    }
    
    return 0;
}