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
int length1(Node *head)
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

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    int length = length1(head);
    if (position >= length)
    {
        insertAtTail(head, tail, data);
        return;
    }
    if (position == 0)
    {
        insertAthead(head, tail, data);
        return;
    }

    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *current = prev->next;

    Node *newNode = new Node(data);

    newNode->next = prev->next;

    prev->next = newNode;
}
void insertWithPosition_given(int data, int given_no, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    int length2 = length1(head);
    // cout<<length2;
    int i = 1;
    Node *temp = head;
    Node *start = head;
    // cout<<temp->data;
    while (i <= length2)
    {
        if (temp->data == given_no)
        {

            // newNode->data=data;
            // cout<<newNode->data;

            if (i == 1)
            {
                Node *newNode = new Node(data);
                newNode->next = temp;
                head = newNode;
                return;
            }

            int i1 = 1;
            Node *prev = head;
            while (i1 < i)
            {
                prev = prev->next;
                i1++;
            }
            Node *newNode = new Node(data);
            // newNode->next=prev->next->next;
            newNode->next = prev->next;
            prev->next = newNode;
        }
        else
        {
            temp = temp->next;
            i++;
        }
    };
}
void deleteWithPosition_given(int given_value, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Deletion is not possible";
        return;
    }
    int length2 = length1(head);
    // cout<<length2;
    int i = 1;
    Node *temp = head;
    // cout<<temp->data;
    while (i <= length2)
    {
        if (temp->data == given_value)
        {
            // newNode->data=data;
            // cout<<newNode->data;

            if (i == 1)
            {
                head = head->next;
                temp->next = NULL;
                delete temp;
                return;
            }
            if (i == length2)
            {
                int i1 = 1;
                Node *prev = head;
                while (i1 < i - 1)
                {
                    prev = prev->next;
                    i1++;
                }
                Node *lastNode = prev->next;

                prev->next = NULL;
                delete lastNode;
                return;
            }

            int i1 = 1;
            Node *prev = head;
            while (i1 < i - 1)
            {
                prev = prev->next;
                i1++;
            }
            // cout<<prev->data;
            Node *curr = prev->next;

            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
        }
        else
        {
            temp = temp->next;
            i++;
        }
    };
}

int main()
{
    // Node *node =new Node(451);  //these are the deault node making
    // cout<<node->data;
    Node *head = NULL;
    Node *tail = NULL;

    insertAthead(head, tail, 20);
    insertAthead(head, tail, 30);
    insertAthead(head, tail, 40);
    insertAthead(head, tail, 50);
    insertAthead(head, tail, 60);
    insertAtTail(head, tail, 1001);
    insertAtTail(head, tail, 1002);
    insertAtTail(head, tail, 1003);
    insertAtTail(head, tail, 1004);

    insertAtPosition(101, 0, head, tail);
    insertAtPosition(108989, 1000, head, tail);
    insertAtPosition(10, 10, head, tail);
    print(head);
    cout << endl;
    // deleteWithPosition_given(101,head,tail);
    deleteWithPosition_given(108989, head, tail);
    print(head);

    return 0;
}
