#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // // vector<int> arr;
    // vector<int> arr;
    // cout<<arr.size();  //cout<<sizeof(arr) gives  ans 12
    // cout<<endl;
    // cout<<arr.capacity()<<endl;

    // arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(6);

    // arr.pop_back();   //to remove an element
    
    //  for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    //  cout<<arr.size();  //cout<<sizeof(arr) gives  ans 12
    // cout<<endl;
    // cout<<arr.capacity()<<endl;


    // vector<int> arr1{1,7,8,9};
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     cout<<arr1[i]<<" ";
    // }
    

    int n;
    cout<<"Enter the no :--> ";
    cin>>n;
    vector<int>  brr{n,-1};
    for (int i = 0; i < brr.size(); i++)
    {
        cout<<brr[i];
    }
    

    return 0;
}