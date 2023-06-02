#include <iostream>
#include<vector>
using namespace std;
class Node
{
    public:
    int data;
    Node * left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* create_tree()
{
      
    int data;
    cout<<"Enter the  Data:--> ";
    cin>>data;
    

     if (data==-1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout<<"Enter the value to be placed in the left child " <<root->data<<":--> ";
    root->left=create_tree();

     cout<<"Enter the value to be placed in the right child "<<root->data<<":--> ";
    root->right=create_tree();

    return root;
    

}
void printLeftTree(Node *root,vector<int> &ans,int level)
{
    if (root==NULL)
    {
        return;
    }
    if (level==ans.size())
    {
        ans.push_back(root->data);
    }
    //left call
    printLeftTree(root->left,ans,level+1);
    //right call
    printLeftTree(root->right,ans,level+1);    
    
}
int main()
{
    Node* root;
    root=create_tree();
    vector<int> ans;
    int level=0;
    printLeftTree(root,ans,level);

    for (auto i:ans)
    {
        cout<<i<<" ";
    }
    


}