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
  
};
void print1(Node *head)
{
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int find_length(Node* head) {
        int len = 0;
        Node* temp = head;
        while(temp != NULL) {
                temp = temp -> next; 
                len++;
        }
        return len;
}

Node * reverse_k_group(Node *&head,int k)
{
    if(head==NULL)
    {
        cout<<"LL IS EMPTY";
        return NULL;
    }
    int n=find_length(head);
    // cout<<n;
    if (k>n)
    {
        // cout<<"Please enter the valid k";
        return head;
    }

    Node *prev=NULL;
    Node *curr=head;
     Node *forward;

  int count=0;
  while (count<k  )
  {

        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        count++;
    }


    if (forward!=NULL)
    {
        head->next=  reverse_k_group(forward,k);
    }

    return prev;
    
    
    
}

int main()
{

    Node *head=new Node(56);
    Node *second=new Node(89);
    Node *third=new Node(78);
    Node *fourth=new Node(7889);
     Node *fifth=new Node(788);
      Node *sixth=new Node(788988);
       Node *seventh=new Node(2326);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;

    print1(head);
    cout<<endl;
    int k=2;  
    cout<<endl;
    head=reverse_k_group(head,4);

    print1(head);

    return 0;
}