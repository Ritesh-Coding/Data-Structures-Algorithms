#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main()
{
    vector <int> v{1,2,3,3,3,6,9,10};
    int size=v.size();
    

    if(binary_search(v.begin(),v.end(),3))//using inbuilt function
    
    {
        cout<<"present";
    }
    else
    {
        cout<<"Not present\n";
    }
    cout<<endl;
    int first_occurence=lower_bound(v.begin(),v.end(),3)-v.begin();
    int last_occurence=upper_bound(v.begin(),v.end(),3)-v.begin();
    int result=last_occurence-first_occurence+1;

    cout<<"Total occurence = "<<result;
    

} 

