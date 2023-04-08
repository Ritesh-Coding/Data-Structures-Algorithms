class Solution {
public:
 int numsquare_helper(int n)
 {
     if(n==0)  //this is the case where we get the answer
        {
            return 1;
        }
        if(n<0)  //this case we can't consider
        {
            return 0;
        }


        int ans = INT_MAX;   //to find the minimization it initialize with INT_MAX
        int i=1;
        int n1=sqrt(n);     //run it upto squareroor
        while(i<=n1)
        {
            int square_number=i*i;
            int count_nodes_level=1+numsquare_helper(n-square_number);    
            
            if(count_nodes_level<ans)   
            {
                ans=count_nodes_level;
            }
            i++;
        }
        return ans; 
 }
    int numSquares(int n) {

        int result=numsquare_helper(n);
        //here we have to -1 because if(n==0) return 1 so we will get 1 extra one
        return result-1;
    }
   
};