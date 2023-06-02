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
int findPosition(int postOrder[],int size,int element)
{
       for (int i = 0; i < size ; i++)
       {
            if (postOrder[i]==element)
            {
                return i;
            }
            
       }
       return -1;       
}
void createMapping(unordered_map<int,int> &mapping,int postOrder[],int n)
{
    for (int i = 0; i < n; i++)
    {
        mapping[postOrder[i]]=i;
    }
    
}

Node* treeInorderPreorder(int preorder[],int postOrder[],int size,int &preIndex,int postOrderStart,int postOrderEnd,unordered_map<int,int> &mapping)  //remember to pass preIndex with by reference
{

        //base case 
        if (preIndex>=size || postOrderStart>postOrderEnd)
        {
            return NULL;
        }
        
        int element=preorder[preIndex++];
        Node *root= new Node(element);
        // int position = findPosition(postOrder,size,element);
        int position =mapping[element];


        //calling the left tree
        root->left=treeInorderPreorder(preorder,postOrder,size,preIndex,postOrderStart,position-1,mapping);

        //calling the right tree
        root->right=treeInorderPreorder(preorder,postOrder,size,preIndex,position+1,postOrderEnd,mapping);

        return root;
}
int main()
{
    Node *root;
    int preorder[]={40,20,10,50,30,60};
    int postOrder[]={4020,50,60,30,10};
    int size=5;

    int preIndex=0;
    int postOrderStart=0;
    int postOrderEnd=size-1;


    unordered_map<int,int> mapping;

    createMapping(mapping, postOrder, size);
    

    Node *head=treeInorderPreorder(preorder,postOrder,size,preIndex,postOrderStart,postOrderEnd,mapping);
    levelOrderTraversal(head);
}