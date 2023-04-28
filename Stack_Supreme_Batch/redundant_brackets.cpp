#include <bits/stdc++.h> 
using namespace std;
#include <stack>

bool findRedundantBrackets(string st,stack <char> s)
{
    for (int i = 0; i < st.size(); i++)
    {
        char ch = st[i];
        if (ch == '(')
        {
            s.push(ch);
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            
            s.push(ch);
        }
        else if (ch == ')')
        {
            bool flag_redundant=true;
            if (s.empty())
            {
                return true;
            }
           
            else
            {
                while (s.top()=='+' || s.top()=='-' || s.top()=='/' || s.top()=='*')
                {
                    flag_redundant=false;
                    s.pop();
                }
                s.pop();
            }
            if (flag_redundant == true) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    stack <char> s;
    string str="(a+b)";
     bool ans=findRedundantBrackets(str,s);
     if(ans)
     {
        cout<<"Redundancy of brackets is there ";
     }
     else
     {
        cout<<"Redundancy of brackets is not there ";
     }

    return 0;
}
