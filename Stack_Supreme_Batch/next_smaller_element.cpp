#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(3);
    int answer=-1;
    bool  flag=true;
    

    for (int i = 0; i < arr.size(); i++)
    {
        for (int  j = i+1; j < arr.size(); j++)
        {
             if (arr[j]<=arr[i])
             {
                flag=false;
                answer=arr[j];
                // cout<<"The updates "<<answer<<" ";
             }

        }
        if (flag==false)
        {
            cout<<answer<<" ";
            flag=true;
        }
        else
        {
            cout<<"-1 ";
            
        }
        
        
    }
    

    return 0;
}