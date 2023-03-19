#include<iostream>
using namespace std;
void find_String(string str,int n,int i,int key,int& check)
{
    if(i>=n)
    {
        return ;
    }
    if (str[i]==key)
    {
        check=1;
        cout<<"Key found at index :--> "<<i<<endl;

    }
    find_String(str,n,i+1,key,check);
}

int main()
{
    string str="loveBabbar";
    int n=str.length();
    char key='z';
    int i=0;
    int check=0;
    find_String(str,n,i,key,check);
    if(check==0)
    {
        cout<<"Character not found";
    }

    return 0;
}