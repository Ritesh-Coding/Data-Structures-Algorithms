#include <iostream>
#include<stack>
using namespace std;

bool solve(stack<char> s,string st)
{
    for (int i = 0; i < st.size(); i++)
  {
         char ch=st[i];
        if (ch=='[' || ch== '{'  || ch == '(')
        {
            s.push(ch);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            if (s.top()=='('  &&   ch==')')
            {
                s.pop();
            }
            else if(s.top()=='{'  && ch =='}')
            {
                s.pop();
            }
            else if(s.top()=='[' && ch == ']')
            {
                s.pop();
            }
            else
            {
                return false;
            }            
        }
        
  }
  if (s.empty())
  {
    return true;
  }
  else{
    return false;
  }
  
}

int main() {
  string st="{{{";
  stack<char> s;
 
  bool ans = solve(s,st);

  if(ans)
  {
    cout<<"This string has a valid parenthesis";
  }
  else
  {
    cout<<"This string does not  have a valid parenthesis";
  }
 
 



  return 0;
}