#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> gas,vector<int> cost)
{
      //kitna petrol kam padgya
        int deficit = 0;
        //kitna petrol bacha hua h 
        int balance = 0;
        //circuit kaha se start krre ho
        int start = 0;

        for(int i=0; i<gas.size(); i++){
            balance += gas[i] - cost[i];
            if(balance < 0 ) {
                //yahi pr galti hogi
                deficit += abs(balance);
                start = i+1;
                balance = 0;
            }
        }

        if(balance >= deficit ) {
            return start;
        }
        else {
            return -1;
        }

    
    
}
int main()
{
    vector<int> gas;
    vector<int> cost;
    gas.push_back(1);
    gas.push_back(2);
    gas.push_back(3);
    gas.push_back(4);
    gas.push_back(5);

    cost.push_back(3);
    cost.push_back(4);
    cost.push_back(5);
    cost.push_back(1);
    cost.push_back(2);
    
   int ans= solve(gas,cost);
   cout<<ans;


    return 0;
}