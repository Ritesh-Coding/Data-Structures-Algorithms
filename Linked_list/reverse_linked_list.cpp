#include <iostream>
using namespace std;
class Node

{
public:
        int data;
        Node *next;
        Node()
        {
                this->data = 0;
                this->next = NULL;
        }
        Node(int data)
        {
                this->data = data;
                this->next = NULL;
        }
};
Node *insert_at_head(Node *&head, int data)
{
        if (head == NULL)
        {
                Node *newNode = new Node(data);
                head = newNode;
               
        }
        else
        {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        }
}
void print(Node *head)
{
        Node *temp = head;
        while (temp != NULL)
        {
                cout << temp->data << " ";
                temp = temp->next;
        }
}

Node *reverse(Node *prev, Node *curr)
{

        if (curr == NULL)
        {
                
                return prev;
        }
        

        Node *forward = curr->next;
        curr->next = prev;

        reverse(curr, forward);
}
Node* reverseusingLoop(Node* head ) {
        Node* prev = NULL;
        Node* curr = head;

        while(curr != NULL ) {
                Node* temp = curr ->next;
                curr ->next = prev;
                prev = curr;
                curr = temp;
        }
        return prev;
}

int main()
{

        Node *head = NULL;
        Node *tail = NULL;
        insert_at_head(head, 20);
        insert_at_head(head, 40);
        insert_at_head(head, 90);
        insert_at_head(head, 120);
        Node *prev = NULL;
        Node *curr = head;

        // head=reverse(prev, curr);  //using recuursion 
        head=reverseusingLoop(head);
        

        //    cout<<"hii";
        print(head);
        return 0;
}