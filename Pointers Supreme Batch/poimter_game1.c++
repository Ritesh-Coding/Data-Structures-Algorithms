#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr=&a;

    // cout<<*ptr * 2<<endl;  //20
    // cout<<++*ptr<<endl;    //11 
    // cout<<*ptr<<endl;
    // a=a+1 ;
    // cout<<a<< endl;

    cout<<*ptr<<endl;  //10
    cout<<*ptr * 2<<endl;  //20
    cout<<(*ptr) ++;  //10  after 11
    cout<<(*ptr) * 2; //22
    cout<<a; //11
    cout<<(*ptr)+1; //12
    cout<<a;  //11

    return 0;
}