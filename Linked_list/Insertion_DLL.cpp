#include <iostream>
using namespace std;

class Node {
        public:
        int data;
        Node* next;
        Node *prev;

        Node() {
                this->data = 0;
                this->next = NULL;
                this->prev=NULL;

        }
        Node(int data) {
                this->data = data;
                this->next = NULL;
                this->prev= prev;
        }
};
void insertAthead(Node *&head, Node *&tail, int data) // here make sure to pass these pointer as pass by reference
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev=newNode; 
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev=tail;
    tail = newNode;
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
int findLength(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail) {
        if(head == NULL) {
                Node* newNode = new Node(data);
                head = newNode;
                tail = newNode;
                return;
        }
        //step1: find the position: prev & curr;

        if(position == 0) {
                insertAthead(head, tail , data);
                return;
        }
       
        int len = findLength(head);
        
        if(position > len) {
                insertAtTail(head, tail, data);
                return;
        }
        //ste1:find prev and curr
        int i = 1;
        Node* prevNode = head;
        // while(i < position-1) {
        //         prevNode= prevNode-> next;
        //         i++;
        // }
        // Node* curr = prevNode -> next;

        // //step2;
        // Node* newNode = new Node(data);

        // //step3:
        // newNode -> next = curr;

        // //step4
        // newNode->prev=prevNode;

        // //step4:
        // prevNode-> next = newNode;

        // curr->prev=newNode;




        //Without using currNode we can also do operation 
        while (i<position-1)
        {
            prevNode=prevNode->next;
            i++;
        }
        cout<<endl;
        cout<<prevNode->data;
        cout<<endl;

        Node* newNode = new Node(data);
        
        prevNode->next->prev=newNode;
        newNode->prev=prevNode;
        newNode->next=prevNode->next;         
        prevNode->next=newNode;
        
}

int main() {

        Node* head = NULL;
        Node* tail = NULL;
        insertAthead(head, tail,20);
        insertAthead(head, tail,50);
        insertAthead(head, tail,60);
        insertAthead(head,tail, 90);
        insertAtTail(head, tail, 77);
         print(head);
        cout << endl;
        insertAtPosition(89,6,head,tail);


        print(head);
        cout << endl;
        


        return 0;
}