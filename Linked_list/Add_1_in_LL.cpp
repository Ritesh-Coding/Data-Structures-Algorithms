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
Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = curr -> next;
        while(curr != NULL) {
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
        }
        return prev;
}

void print(Node* head) {
        Node* temp = head; 
        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp -> next;
        }
        cout << endl;
}
Node *solve(Node *&head)
{

    head=reverse(head);  //step 1 : reverse the LL
    if(head==NULL)
    {
        return NULL;
    }
    Node *anshead=NULL;   
    Node *anstail=NULL;
    
    Node *curr=head;
    
    int sum=curr->data+1;    //here we first add 1 in unit place
    int carry=0;
    int digit=sum%10;
    carry=sum/10;
    Node * newNode=new Node(digit);
    anstail=newNode;
    anshead=newNode;
    curr=curr->next;      //from the original LL me move forward curr pointer
    while (curr!=NULL)    
    {
        sum=carry+curr->data;  //if carry occurs then we add 
        int digit=sum%10;
        carry=sum/10;
        Node *newNode=new Node (digit);
        anstail->next=newNode;
        anstail=newNode;
        curr=curr->next;

    }
    
         while(carry != 0) {              //at the end if carry occurs then also we handle it
                int sum = carry;
                int digit = sum % 10;
                carry = sum / 10;
                Node* newNode = new Node(digit);
                anstail -> next = newNode;
                anstail = newNode;
        }
    
    anshead=reverse(anshead);       //step3 reverse the answer
    return anshead;
    
}

 
int main()
 {
  Node* head = new Node(9);
  Node* second = new Node(0);
  Node* third = new Node(0);
  Node* fourth = new Node(0);
  Node* fifth = new Node(0);
  Node* sixth = new Node(9);
  
  head -> next = second;
  second -> next = third;
  third -> next = fourth;
  fourth -> next = fifth;
  fifth -> next = sixth;
   print(head);

   cout<<endl; 
   
   
   Node *ans=solve(head);

   print(ans);
 


  return 0;
 }