#include<iostream>
#include<vector>
using namespace std;
pair<int,bool> solve(Node *root)
{
    if(root==NULL)
    {
        //base case 
        pair<int,bool> p=make_pair(INT_MIN,true);

        return p;
    }
    if (root->left==NULL && root->right==NULL)
    {
        //leaf node 
            pair<int,bool> p=make_pair(root->data,true);
            return p;
    }

    pair<int,bool> leftans=solve(root->left);
    pair<int,bool> rightans=solve(root->right);

    if(leftans.second==true && rightans.second==true && root->data > leftans.first && root->data>rightans.first)
    {
        pair<int,bool> p=make_pair(root->data,true);
        return p;
    }
    else
    {
          pair<int,bool> p=make_pair(root->data,false);
        return p;
    }
    
}
int main()
{
       //this is the only code you have to submit it into the online platform 
    
    return 0;
}