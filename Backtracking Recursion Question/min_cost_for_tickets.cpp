


class Solution {
public:
    int solve(vector<int> &days,vector<int> costs,int start,int day_end)
    {
       
            //base case
            static int target=days[start];
            if(target>=days[day_end])
            {
                return target;
            }

            int mini=INT_MAX;
            for(int i=0;i<costs.size();i++)
            {
                int element=costs[i];
                target+=element;
                int ans =solve(days,costs,start+1,day_end);
                if(ans!=INT_MAX)
                {
                    mini=min(mini,ans);
                }
            }


        return mini;
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
       int day_start=0;
       
       int day_end=days.size()-1;
       int ans= solve(days,costs,day_start,day_end);
       if(ans==INT_MAX)
       {
           return -1;
       }
       else
       {
           return ans;
       }
    }
};