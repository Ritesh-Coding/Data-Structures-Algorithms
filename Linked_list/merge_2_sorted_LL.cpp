#include <iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* next;

        Node(int data) {
                this -> data = data;
                this -> next = NULL;
        }
};

void print(Node* head) {
        Node* temp = head; 
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node * solve(Node *head1,Node *head2)
{
    if (head1==NULL)
    {
        return head2;
    }
    if (head2==NULL)
    {
        return head1;
    }

    Node *ansHead=NULL;
    Node *ansTail=NULL;

    Node *curr1=head1;
    Node *curr2=head2;

    while (curr1!=NULL && curr2!=NULL)
    {
        if (curr1->data<=curr2->data)
        {
            Node *temp=curr1;
            
            
            Node *newNode = new Node(curr1->data);
            if (ansHead==NULL || ansTail==NULL)
            {
                ansHead=newNode;
                ansTail=newNode;
            }
            else
            {
            ansTail->next=newNode;
            ansTail=newNode;
            }
            
            
            curr1=curr1->next;
            temp->next=NULL;
            delete temp;
            
        }
        else
        {
            Node *temp=curr2;
            

            Node *newNode= new Node(curr2->data);
            if (ansHead==NULL || ansTail==NULL)
            {
                ansHead=newNode;
                ansTail=newNode;
            }
            else
            {
            ansTail->next=newNode;
            ansTail=newNode;
            }

            curr2=curr2->next;
            temp->next=NULL;
             delete temp;
        }
    }
    

    if (curr1!=NULL)
    {
        ansTail->next=curr1;
        

    }
    if (curr2!=NULL)
    {
        ansTail->next=curr2;
        
    }
    
    
    
    return ansHead;
    
}


int main()
{
    Node *head1=new Node (1);
    Node *second1= new Node (2);
    Node *third1= new Node(3);
    Node *fourth1= new Node(31);
    Node *fifth1= new Node(38);

    Node *head2=new Node(1);
    Node *second2=new Node(1);
    Node *third2=new Node(3);
    Node *fourth2=new Node(4);
    Node *fifth2=new Node(9);
    Node *sixth2=new Node(91);



    head1->next=second1;
    second1->next=third1;
    third1->next=fourth1;
    fourth1->next=fifth1;

    head2->next=second2;
    second2->next=third2;
    third2->next=fourth2;
    fourth2->next=fifth2;
    fifth2->next=sixth2;

    print(head1);
    cout<<endl;

    print(head2);
    cout<<endl;

    Node *ans= solve(head1,head2);
    // cout<<"Heloo";
    print(ans);


}