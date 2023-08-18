#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(3,vector<int> (5));
    
     vector<int> a{1,2,3};
    vector<int> b{4,5,6};

    arr.push_back(a);
    
    arr.push_back(b);

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}