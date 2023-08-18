#include <iostream>
#include<queue>
using namespace std;

class Node {
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;
                this->right = NULL;
        }
};


Node* insertIntoBST(Node* root, int data) {

        if(root == NULL) {
                //this is the first node we have to create
                root = new Node(data);
                return root;
        }

        //no the first node 

        if(root-> data > data) {
                //insert in left
                root->left = insertIntoBST(root->left, data);
        }
        else {
                //insert into right
                root->right = insertIntoBST(root->right, data);
        }
        return root;
}

void takeInput(Node* &root) {
        int data;
        cin >> data;

        while(data != -1) {
                root = insertIntoBST(root, data);
                cin >> data;
        }
}
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}
void inOrderTraversal(Node* root,vector<int> &v) {
	//LNR
	if(root == NULL)
		return;

	inOrderTraversal(root->left,v);
    v.push_back(root->data);
	cout << root->data << " ";
	inOrderTraversal(root->right,v);
}
Node* bstUsingInorder(vector<int> v, int s, int e) {
	//base case
	if(s > e) {
		return NULL;
	}

	int mid = (s+e)/2;
	int element = v[mid];
	Node* root = new Node(element);

	root->left = bstUsingInorder(v, s, mid-1);
	root->right = bstUsingInorder(v, mid+1, e);

	return root;
	
}


int main() {
	  Node* root = NULL;
	  cout << "Enter the data for Node " << endl;
	  takeInput(root);
      vector<int> v;

      inOrderTraversal(root,v);
      

     int s = 0;
	int e = v.size()-1;

	 root = bstUsingInorder(v, s,e);

	  cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);
	  cout << endl;
	  
	
	
	
  return 0;
}
