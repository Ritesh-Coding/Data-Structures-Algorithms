#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

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
int findPosition(int inorder[],int size,int element)
{
       for (int i = 0; i < size ; i++)
       {
            if (inorder[i]==element)
            {
                return i;
            }
            
       }
       return -1;       
}
void createMapping(unordered_map<int,int> &mapping,int inorder[],int n)
{
    for (int i = 0; i < n; i++)
    {
        mapping[inorder[i]]=i;
    }
    
}

Node* treeInorderPreorder(int preorder[],int inorder[],int size,int &preIndex,int inorder_start,int inorder_end,unordered_map<int,int> &mapping)  //remember to pass preIndex with by reference
{

        //base case 
        if (preIndex>=size || inorder_start>inorder_end)
        {
            return NULL;
        }
        
        int element=preorder[preIndex++];
        Node *root= new Node(element);
        // int position = findPosition(inorder,size,element);
        int position =mapping[element];


        //calling the left tree
        root->left=treeInorderPreorder(preorder,inorder,size,preIndex,inorder_start,position-1,mapping);

        //calling the right tree
        root->right=treeInorderPreorder(preorder,inorder,size,preIndex,position+1,inorder_end,mapping);

        return root;
}
int main()
{
    Node *root;
    int preorder[]={5,1,3,4,2};
    int inorder[]={3,1,4,5,2};
    int size=5;
    int preIndex=0;
    int inorder_start=0;
    int inorder_end=size-1;


    unordered_map<int,int> mapping;

    createMapping(mapping, inorder, size);
    

    Node *head=treeInorderPreorder(preorder,inorder,size,preIndex,inorder_start,inorder_end,mapping);
    levelOrderTraversal(head);
}