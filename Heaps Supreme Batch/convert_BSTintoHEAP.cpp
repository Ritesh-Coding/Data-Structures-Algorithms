#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder_traversal(Node *root,vector<int> &arr)
{
    if (root==NULL)
    {
        return;
    }
    inorder_traversal(root->left,arr);

    arr.push_back(root->data);
    
    
    inorder_traversal(root->right,arr);
    
}
void postorder_traversal(Node *root,vector<int> &arr)
{
      static int i=0;
      if (root==NULL)
      {
        return;
      }
      postorder_traversal(root->left,arr);
      postorder_traversal(root->right,arr);
      root->data=arr[i++];
      
}
void level_order_traversal(Node *root)
{
    queue<Node*> q; //node k andar Node* store krna  
    q.push(root); // FIRST OF ALL INSERT ROOT NODE  
    q.push(NULL);

    while(!q.empty())    
    {
        //  A    STORE THE ROOT NODE INTO THE temp variable first    
        Node * temp=q.front();
        //B        //POP THE ROOt Node 
        q.pop();   
        if (temp==NULL)
        {
            cout<<endl;
            
            if (!q.empty())
            {
                  q.push(NULL);
            }
        }
        else
        {
        //C        //print the temp    
        cout<<temp->data<<" ";
        //D     //if left child exist for the temp then insert into the queue 
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        }

    }

}
int main()
{
    vector<int> arr;
   Node *root=new Node(100);
   root->left=new Node(50);
   root->right=new Node(200);
   root->left->left=new Node(25);
   root->left->right=new Node(60);
   
   root->right->left=new Node(150);
   root->right->right=new Node(300);
  
   inorder_traversal(root,arr);
   for (int i = 0; i < arr.size(); i++)
   {
        cout<<arr[i]<<" ";
   }

   postorder_traversal(root,arr);
   cout<<endl;

   level_order_traversal(root);
   

}