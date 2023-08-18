#include<iostream>
using namespace std;
class trieNode
{
    public:
    char data;
    trieNode *children[26];
    bool isterminal;

    trieNode(char ch)
    {
        this->data=ch;
        for (int  i = 0; i < 26; i++)
        {
                children[i]=NULL;
        }
        this->isterminal=false;
    }
};
void insert_element(trieNode *root,string str)
{
    if (str.length()==0)
    {
        root->isterminal=true;
        return;
    }

    char ch = str[0];
    int index=ch-'A';
    trieNode *child;
    if (root->children[index]!=NULL)
    {
        child=root->children[index];
    }
    else
    {
        child=new trieNode(ch);
        root->children[index]=child;
    }

    insert_element(child,str.substr(1));
    


    
}

int main()
{
    trieNode* root= new trieNode('-');
    inserting_element(root,"Ritesh");

}