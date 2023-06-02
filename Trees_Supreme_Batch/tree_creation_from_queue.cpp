#include <bits/stdc++.h>
#include <queue>
using namespace std;

// //steps
// 1.Create Queue having all the elments as 1,2,3,4,5
// 2.Insert root
// q.pop()
// while q is not empty
// 3.if root->left->==NULL ||root->left->left   insert root->left = q.front   && q.pop()
// 4. if root->right==NULL INSERT root->right = q.front  && q.pop() return root


class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }

};
Node* create_tree(queue<int>& q)
{
    int data;
    cout<<"\nRoot Data:--> ";
    data=q.front();
    Node *root=new Node(data);  //for the current root enter the data
    
    
    while (!q.empty())
    {
        q.pop();
        data=q.front();
          
            if(root->left==NULL || root->left->left==NULL)
            {
                cout<<" \nvalue to be placed in left side of :--> "<<root->data;
            root->left=create_tree(q);  //recursion sambhal lega
            }

            if(root->right==NULL)
            {
                cout<<"\nvalue to be placed in right side of :--> "<<root->data;
                root->right=create_tree(q);
                return root;
            }
    }
}
int main()
{
    Node *root;
    queue<int> q;
    q.push(20);
    q.push(30);
    q.push(-1);
    q.push(40);
    q.push(-1);
    q.push(-1);
    q.push(50);
    q.push(-1);
    q.push(-1);
    
    root=create_tree(q);

    

    return 0;
} 
