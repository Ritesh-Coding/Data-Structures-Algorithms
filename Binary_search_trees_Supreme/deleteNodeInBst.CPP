#include <iostream>
#include<queue>
#include<vector>

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
Node* searchingInBST(Node *root,int target)
{
     if (root==NULL)
     {
        return NULL;
     }

    if (root->data==target)
    {
            return root;
    }
//     bool leftans= false;
//      bool rightans= false;
    
     if(root->data>target)
     {
        return searchingInBST(root->left,target);  //while you can also create inplace of return write bool leftans and bool rightans and in the final with the or operation you can calculate the value and pass them 

        //leftans=searchingInBST(root->left,target);
     }
     else
     {
        return searchingInBST(root->right,target);

        //rightans=searchingInBST(root->right,target);
     }

     //return leftans || rightans;
     
     
}
int maximumInBST(Node *root)
{
        Node* temp=root;
        if (temp==NULL)
        {
                return -1;
        }
        while (temp->right!=NULL)
        {
                temp=temp->right;
        }
        return temp->data;       
        
}
Node* deleteNodeinBst(Node *root,int target)
{
    if (root==NULL)
    {
        return NULL;
    }

    if (root->data==target)
    {
        //case 1
        if (root->left==NULL && root->right==NULL)
        {
            delete(root);
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL)
        {
            Node *child=root->right;
            delete(root);
            return child;
        }
        else if(root->right==NULL && root->left!=NULL)
        {
            Node *child=root->left;
            delete(root);
            return child;
        }
        else
        {
            int inorderpre=maximumInBST(root->left);
            root->data=inorderpre;

            root->left=deleteNodeinBst(root->left,inorderpre);
            return root;
        
        }
        

    }
    else if(root->data>target)
    {
        root->left=deleteNodeinBst(root->left,target);
    }
    else
    {
       root->right= deleteNodeinBst(root->right,target);
    }
    return root;
    
}
int main() {
       
	  Node* root = NULL;
	  cout << "Enter the data for Node " << endl;
	  takeInput(root);
      cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);

        //delete the node;
       root = deleteNodeinBst(root,11);

        
	  cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);


      return 0;

}