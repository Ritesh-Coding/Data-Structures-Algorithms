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
};
int find_middle(Node *head)
{
    int length=0;
    Node *temp=head;
    while (temp!=NULL)
    {
        temp=temp->next;
        length++;
    }
    return length;
    
}
int main()
{
    Node *head=new Node(65);
    Node *temp = head;

    Node *second = new Node(55);

    Node *third = new Node(66);

    Node *fourth = new Node(89);

    // Node *fifth = new Node(897);

    head->next=second;
    second->next=third;
    third->next=fourth;
    // fourth->next=fifth;


    int length = find_middle(head);
    cout<<"The length of the linked list is :--> "<<length<<endl;

    if (length % 2==0)
    {
       for (int i = 1; i < length/2; i++)
       {
            temp=temp->next;
       }
      
    }
    else
    {
        for (int i = 1; i < length/2+1; i++)
       {
             temp=temp->next;
       }
    }
    cout<<"The middle of the linked list is : --> "<<temp->data;

    


    return 0;
}