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
int main()
{
    Node *root;
    
    root=create_tree();

    return 0;
} 