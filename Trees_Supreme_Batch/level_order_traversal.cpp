#include <iostream>
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
int  height_of_tree(Node *root)
{
    
    if (root==NULL)
    {
        return 0;
    }
    int leftheight=height_of_tree(root->left);
    int rightheight=height_of_tree(root->right);
    int ans=max(leftheight,rightheight)+1;

    return ans;

    
}
void inorder_traversal(Node *root)
{
    if (root==NULL)
    {
        return;   
    }

    // LNR
    inorder_traversal(root->left);
     
    cout<<root->data<<" ";  //root is in the middle 

    inorder_traversal(root->right);

}
void preorder_traversal(Node *root)
{
    if (root==NULL)
    {
        return;   
    }

    // NLR
    cout<<root->data<<" ";  //root is in the left

    inorder_traversal(root->left);    
    

    inorder_traversal(root->right);

}
void postorder_traversal(Node *root)
{
    if (root==NULL)
    {
        return;   
    }

    // LRN
  
    inorder_traversal(root->left);        

    inorder_traversal(root->right);
    cout<<root->data<<" ";  //root is in the right

}
int main()
{
    Node *root;
    
    root=create_tree();
    level_order_traversal(root);
    inorder_traversal(root);
    int ans =height_of_tree(root);
    cout<<ans;

    return 0;
} 