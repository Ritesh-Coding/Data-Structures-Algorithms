#include<iostream>
using namespace std;
int&  returnValue(int& x) //this is a return by reference function as it returns the address 
                            //it can't return local variable and also it can't return a constant value
                            //int&x shows the pass by reference value of a 
{
    // x=x+1;   //x is the another name of a 
  cout<<"x = "<< x <<"The address of x is "<<&x<<endl;

  //returns the reference 
  return x;   //here x is a reference having the same memory loacation as a

}
int main()
{
    int a=20;
    int &b=returnValue(a);   //b is a refrence varaible having same memeory location but different name

    cout<<" a = "<<a <<" The address of a is "<<&a<<endl;

     cout<<" b = "<<b <<" The address of b is "<<&b<<endl;

     returnValue(a)=13;  //x=13  //agar hum kuch v return karana chate h value using returnValue reference variable then write it in left side and assign value

      cout<<" a = "<<a <<" The address of a is "<<&a<<endl;
}