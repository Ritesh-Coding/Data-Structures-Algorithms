#include<iostream>
using namespace std;
void printSubsequence(string& str,string output,int i)
{
    if(i>=str.length())  //base case 
    {
        cout<<output<<endl;
        return;
    }
    // output.push_back(str[i]);
    printSubsequence(str,output+str[i],i+1);  //include

    printSubsequence(str,output,i+1); //exclude


}

int main()
{
    string str="abc";
    string output="";
    int i=0;
    printSubsequence(str,output,i);
    
    return 0;
}
