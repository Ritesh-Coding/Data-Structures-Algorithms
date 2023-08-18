#include <bits/stdc++.h>
using namespace std;

// Defining the structure of the Node class
class Node {
public:
int data;
Node *left, *right;
Node(int data) {
	this->data = data;
	left = right = NULL;
}
};

// Function to find the parent index of a node
int parent(int i) {
return (i - 1) / 2;
}

// Function to heapify up the node to arrange in max-heap order
void heapify_up(vector<Node*>& q, int i) {
while (i > 0 && q[parent(i)]->data < q[i]->data) {
swap(q[i], q[parent(i)]);
i = parent(i);
}
}

// Function to convert BST to max heap
Node* convertToMaxHeapUtil(Node* root) {
if (root == NULL) {
return root;
}
// Creating a vector for storing the nodes of BST
vector<Node*> q;
q.push_back(root);
int i = 0;
while (q.size() != i) {
	if (q[i]->left != NULL) {
		q.push_back(q[i]->left);
	}
	if (q[i]->right != NULL) {
		q.push_back(q[i]->right);
	}
	i++;
}

// Calling heapify_up for each node in the vector
for (int i = 1; i < q.size(); i++) {
	heapify_up(q, i);
}

// Updating the root as the maximum value in heap
root = q[0];
i = 0;

// Updating left and right nodes of BST using vector
while (i < q.size()) {
	if (2 * i + 1 < q.size()) {
		q[i]->left = q[2 * i + 1];
	} else {
		q[i]->left = NULL;
	}
	if (2 * i + 2 < q.size()) {
		q[i]->right = q[2 * i + 2];
	} else {
		q[i]->right = NULL;
	}
	i++;
}
return root;
}

// Function to print postorder traversal of the tree
void postorderTraversal(Node* root) {
if (root == NULL) {
return;
}
// Recurring on left subtree
postorderTraversal(root->left);

// Recurring on right subtree
postorderTraversal(root->right);

// Printing the root's data
cout << root->data << " ";
}

// Driver code
int main() {
// Creating the BST
Node* root = new Node(4);
root->left = new Node(2);
root->right = new Node(6);
root->left->left = new Node(1);
root->left->right = new Node(3);
root->right->left = new Node(5);
root->right->right = new Node(7);
// Converting the BST to max heap
root = convertToMaxHeapUtil(root);

// Printing the postorder traversal of the tree
cout << "Postorder Traversal of Tree: ";
postorderTraversal(root);

return 0;
}
