#include<iostream>
using namespace std;
void solve(string &str,string part,int i)
{
    if (i>str.size())
    {
        return;
    }

    int start_index=i;
    int last_index=part.size();
    
    for (int i = start_index; i < last_index && i<str.size(); i++)
    {
          while (str[i]==part[i])
          {
             
          }
          
          
    }
    
    
    

    
}
int main()
{
    string str="daabcbaabcbc";
    string part="abc";
    int i=0;
    solve(str,part,i);
    return 0;
}