#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
};
int find_middle(Node *slow,Node *fast)
{
    if(slow==NULL || fast== NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return 0;
    }
    while(slow!=NULL && fast!=NULL)
    {
        fast=fast->next;
        if (fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;   
              
        }
    }
    return slow->data;
}
Node *print(Node *head)
{
    return NULL;
}
int main()
{

    Node *head=new Node(56);
    Node *second=new Node(89);
    Node *third=new Node(78);
    Node *fourth=new Node(7889);
     Node *fifth=new Node(788);
      Node *sixth=new Node(788988);
       Node *seventh=new Node(788);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

    Node* slow=head;
    
    Node* fast=head->next;               //MAKE THIS CONDITION TO MAKE IT RUN INTO EVEN CASE 
    if(head==NULL)
    {
        print(head);
    }
    else
    {
    int ans=find_middle(slow,fast);
    cout<<endl<<ans;
    }
    
    return 0;
}