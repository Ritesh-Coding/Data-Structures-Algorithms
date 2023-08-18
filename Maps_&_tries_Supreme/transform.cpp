#include<iostream>
using namespace std;
class Solution {
private:
bool valid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return 1;
        }
        return 0;
}
        
char To_Lowercase(char a){
    if((a>='a' && a<='z') || (a>='0' && a<='9') ){
        return a;
    }
    else{
        char temp=a-'A'+'a';
        return temp;
    }
}
        

bool Check_pelindrom(string a){
    int s=0;
    int e=a.length()-1;
    while(s<=e){   
        if(To_Lowercase(a[s])!=To_Lowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        string temp="";
            for(int i=0;i<s.length();i++){
                if(valid(s[i])){
                temp.push_back(s[i]);
                }
            }
            //Lower case
            for(int i=0;i<temp.length();i++){
                temp[i]=To_Lowercase(temp[i]);
            }
            return Check_pelindrom(temp);
    }
};
int main(){
    Solution a;
    string str;
    getline(cin,str);
    if(a.isPalindrome(str)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}