#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int *ptr=&a;

    cout<<"Value of a is "<<a<<endl;
    cout<<"Address of a is "<<&a<<endl;
    cout<<"The value of a is "<<*ptr<<endl;
    cout<<"Address of a is "<<ptr<<endl;
    cout<<"Address of ptr is "<<&ptr<<endl;


    char c='o';
    char *ch=&c;
    cout<<sizeof(ch)<<endl;  //it always gives answer as 4 bcz it depends on system architecture my system in 32 bytes  so 4*8=32
    cout<<sizeof(a)<<endl;


    //Bad practice
    int *ptr1;
    cout<<*ptr1<<endl;  //it gives random value and also gives segmentation fault 



    int *ptr2=0;
    cout<<*ptr2;  //it prints nothing but it has to give segmentation fault 
    return 0;
}
 