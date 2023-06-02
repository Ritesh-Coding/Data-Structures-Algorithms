#include <iostream>
#include <map>
#include <queue>
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
void left_view(Node *root)
{
    if (root==NULL)
    {
        return;
    }
    map<int,int> topNode;  //this map contains the int value of the node and horizontal distance 

    queue<pair<Node*,int>> q; //these queue contains the NODE AND horizontal distance 
    q.push(make_pair(root,0));

    while (!q.empty())  //this is the code for the level order traversal 
    {
        pair<Node*,int>temp=q.front();
        q.pop();

        Node* frontNode=temp.first;
        int hd=temp.second;

        if (topNode.find(hd)==topNode.end()) //It says that the value is not found in the map
        {
             topNode[hd]=frontNode->data;
        }

        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left,hd-1));
        }
        
        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right,hd+1));
        }      
        

    }   
    //Now the answer gets stored in the map we have to just print it
        cout<<"Printing the answer ";
        for(auto i: topNode)
        {
            cout<<i.first <<" "<<i.second;
            cout<<endl; 
        } 
}
int main()
{
      Node *root;
      root=create_tree();

      left_view(root);

}
