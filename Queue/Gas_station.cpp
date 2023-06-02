#include<iostream>
using namespace std;
int main()
{
    int pump[]={4,6,7,4};
    int cost[]={6,5,3,5};
    int pump_size=sizeof(pump)/sizeof(pump[0]);
    
    for (int i = 0; i < pump_size ; i++)
    {
        int extra_petrol=0;
        int j;
        for (j = 0; j < i+pump_size; j++)
        {
            int current_index=j%pump_size;
            extra_petrol+=pump[current_index]-cost[current_index];
            if (extra_petrol<0)
            {
                break;
            }      
        }
        if (j==i+pump_size)
        {
            cout<<i;
            return 0;
        }
        
        
    }

    return -1;
}