class Solution {
public:
    bool matchhelper(string s,int si,string p,int pi)
    {
        //base case  simple return if both have the same size
        if(si==s.size() && pi==p.size())
        {
            return true;
        }

        //base case for the last case for eg ab************************
        if(si==s.size() && pi<p.size())
        {
            while(pi<p.size())
            {
            if(p[pi]!='*')
                {
                    return false;
                }
                 pi++;
            }
            return  true;
        }


        //
        if(s[si]==p[pi]  || p[pi]=='?')
        {
            //our character gets matched
           return  matchhelper(s,si+1,p,pi+1);
        }
        if(p[pi]=='*')
        {

            //here we skip the * and try to match the  characters 
            bool case2=  matchhelper(s,si,p,pi+1);

            //here we consider * as 1 character 
           bool case1 = matchhelper(s,si+1,p,pi);         

            return case1 || case2;
        }

        //here if our character does not match
        return false;

    }


    bool isMatch(string s, string p) {
        int si=0;
        int pi=0;
         return matchhelper(s,si,p,pi);
         
    }
};