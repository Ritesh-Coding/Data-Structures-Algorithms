int sumofTree(Node* root)
    {
        if(root==NULL)
            return 0;
            
        return (sumofTree(root->left) + sumofTree(root->right) + root->data);
    }
    bool isSumTree(Node* root)
    {
        if(root == NULL)
           return true;
           
        else if(root->left == NULL && root->right == NULL)
           return true;
            
         if(isSumTree(root->left) and isSumTree(root->right))
         {
             int sum1 = sumofTree(root->left);
             int sum2 = sumofTree(root->right);
             
             if((sum1 + sum2) == root->data)
                 return true;
                 
             return false;
         }
          
         return false; 
    }