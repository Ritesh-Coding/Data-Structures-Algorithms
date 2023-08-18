#include<iostream>
using namespace std;
class TrieNode
{
    public:
     char data;
     TrieNode *children[26];
     bool isterminal;
     TrieNode(char ch)
     {
        this->data=ch;
        for (int i = 0; i < 26; i++)
        {
            children[i]=NULL;
        }
        this->isterminal=false;
        
     }
};

void insertword(TrieNode* root, string word)
{
    if(word.length()==0)
    {
        root->isterminal = true;
         return;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;
    if (root->children[index]!=NULL)
    {
          child=root->children[index];
    }
    else
    {
        child=new TrieNode(ch);
        root->children[index]=child;
    }
    
    insertword(child, word.substr(1));


}
bool  checkword(TrieNode* root,string word)
{
    if (word.length()==0)
    {
        return root->isterminal;
    }

    char ch=word[0];
    int index=ch-'a';

    TrieNode* child;

    if (root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else
    {
        return false;
    }
    return  checkword(child,word.substr(1));
    
    
}
void deleteword(TrieNode *&root,string word)
{
    if(word.length()==0)
    {
         root->isterminal=false;
         return ;
    }

    char ch=word[0];
    int index=ch-'a';
    TrieNode *child;

    if (root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    
    else
    {
        cout<<"Not present so it can't be deleted"<<endl;
        return ;
    }
    return  deleteword(child,word.substr(1));
}



int main()
{
    TrieNode *root=new TrieNode('-');
    insertword(root, "coding");

    insertword(root,"coder");
    insertword(root,"code");
    insertword(root,"codehelp");
    insertword(root,"room");
    insertword(root,"codeforces");

    if (checkword(root,"coder"))
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }

     deleteword(root,"code");
    if (checkword(root,"code"))
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }

    return 0;
}