#include <iostream>
#include <stack>
using namespace std;

bool solve(stack<char> s, string st)
{
    bool flag = false;
    for (int i = 0; i < st.size(); i++)
    {
        char ch = st[i];
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            flag = true;
            s.push(ch);
        }
        else if (ch == ')')
        {
            if (s.empty())
            {
                return false;
            }
            if (flag == false)
            {
                return false;
            }
            else
            {
                while (s.top()=='+' || s.top()=='-' || s.top()=='/' || s.top()=='*')
                {
                    
                    s.pop();
                }
                s.pop();
            }
            
        }

        
    }
      if (s.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
}

int main()
{
    string st = "(b+c-d+(c))";
    stack<char> s;

    bool ans = solve(s, st);
 
    if (ans==true)
    {
        cout << "This string has no redundant brackets";
    }
    else
    {
        cout << "This string has redundant brackets";
    }
   
    

    return 0;
}