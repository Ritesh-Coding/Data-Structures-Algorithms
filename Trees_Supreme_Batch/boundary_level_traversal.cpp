#include <iostream>
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
        left=NULL;
        right=NULL;
    }

};
Node* create_tree()
{
    int data;
    
    cout<<"Enter the data :-->";
    cin>>data;
    
    if (data==-1)    
    {
        return NULL;
    }
    //step A,B,C   A->create the root node  B->Enter the data for the left child  C->Enter the data for the right child

    Node *root=new Node(data);  //for the current root enter the data
    
    cout<<"Enter the value to place in left child  of "<<data << ":--> ";
    
    root->left=create_tree();  //recursion sambhal lega

     cout<<"Enter the value to place in right child  of "<<data<< ":--> ";
     
   
    root->right=create_tree();   //recursion sambhal lega 
 
    return root;

}
void left_boundary(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
     if (root->left)
     {
        left_boundary(root->left);
     }
     else
     {
        left_boundary(root->right);
     }    
    
    
}
void leaf_nodes(Node* root)
{
    if (root==NULL)
    {
        return;
    }
    if (root->left==NULL && root->right==NULL)
    {
        cout<<root->data<<" ";
    }   
    
        leaf_nodes(root->left);    
    
        leaf_nodes(root->right);   
        
}
void right_boundary(Node * root)
{
    if (root==NULL)
    {
        return;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return;
    }
    if (root->right)
    {
        right_boundary(root->right);
    }
    else
    {
        right_boundary(root->left);
    }
    cout<<root->data<<" "; 
    
    
}
void boundary_level_traversal(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data;
    //left boundary
     left_boundary(root->left);

     //leaf_nodes
     leaf_nodes(root);

     //right boundary
     right_boundary(root->right);

}
int main()
{
    Node *root;
    
    root=create_tree();

    boundary_level_traversal(root);

    return 0;
} 