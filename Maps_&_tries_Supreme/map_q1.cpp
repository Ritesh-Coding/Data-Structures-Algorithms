#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<char,int> freq;
    string str="Ritesh";
    for (int i = 0; i < str.length(); i++)
    {
        char ch=str[i];
        freq[ch]++;
    }

    for(auto i : freq)
    {
        cout<<i.first << " "<<i.second<<endl;
    }
    

    return 0;
}