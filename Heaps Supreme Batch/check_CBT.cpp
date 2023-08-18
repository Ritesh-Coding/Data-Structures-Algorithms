#include<iostream>
using namespace std;
class Node {
public:
int data;
Node *left, *right;
Node(int data) {
	this->data = data;
	left = right = NULL;
}
};
int countNodes(Node* node) {
    if (node == NULL)
        return 0;
    
    return 1 + countNodes(node->left) + countNodes(node->right);
}

bool isCompleteUtil(Node* node, int index, int count) {
    cout<<index<<" "<<count<<endl;
    if (node == NULL)
        return true;

    if (index >= count)
    {
        cout<<"hello";
        return false;
    }
    
    return (isCompleteUtil(node->left, 2 * index + 1, count) &&
            isCompleteUtil(node->right, 2 * index + 2, count));
}

bool isCompleteTree(Node* root) {
    int nodeCount = countNodes(root);
    // cout<<nodeCount;
    return isCompleteUtil(root, 0, nodeCount);
}
int main()
{
    Node *root=new Node(100);
    root->left=new Node(25);
    root->right=new Node(65);
    root->left->left=new Node(45);
    root->left->right=new Node(89);
    root->right->left=new Node(56);
   
    // root->right->right=new Node(89);

    bool ans= isCompleteTree(root);

    if (ans)
    {
        cout<<"It is an CBT";
    }
    else
    {
        cout<<"It is not an CBT";
    }
    



    return 0;
}