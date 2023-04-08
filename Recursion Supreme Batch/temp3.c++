#include<iostream>
#include<vector>
using namespace std;
void maxProfitfind(vector<int> prices,int i,int& minPrice,int& maxProfit)
{
    if (i==prices.size())
    {
        return;
    }
    //sol for 1 case
    if (prices[i]<minPrice)
    {
        minPrice=prices[i];
    }
    int todayPrice=prices[i]-minPrice;
    if (todayPrice > maxProfit)
    {
        maxProfit=todayPrice;
    }
    

    //recursion call
    maxProfitfind(prices,i+1,minPrice,maxProfit);
    
}
int main()
{
    vector<int> prices{1,2,78};
   
    int minPrice=INT16_MAX;
    int maxProfit=INT16_MIN;
    int i=0;
    maxProfitfind(prices,i,minPrice,maxProfit);
    cout<<maxProfit;

    return 0;
}
