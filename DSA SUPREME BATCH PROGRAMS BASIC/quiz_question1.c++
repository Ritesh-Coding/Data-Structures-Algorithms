#include<iostream>
using namespace std;


// void car(){
//         cout<<"Audi 800";   //syntax 
//     }

// int main()
// {
    
//     car();
//     return 0;
// }

// int main()       ans time and n are not declared
// {
//     int a =10;
//     if(a=15)
//     {
//         time;
//         cout<<a;
//         if (n==3)
//         {
//             goto time;
//         }
//         break;

//         return 0;
        
//     }
// }

// int main()           //it infinetly prints n
// {
//     int n=10;
//     for (;;)
//     cout<<n;
//     // cout<<(n>80) ? "passed" : "failed";    

//     return 0;
    
// }


// int main()
// {
//     int a=0,b=10;
//     a=2;
//     b=7;

//     if (a)
//     {
//         cout<<"True";
//     }
//     else
//     {
//         cout<<"false";
//     }   
    
    
// }



// int main()
// {
//     int a=5,b=-7,c=0,d;
//     d=++a && ++b || ++c;  //here for d first part before or is exexuted and hence it does not go for the other part of the or so c value is unchanged
//     printf("%d%d%d%d",a,b,c,d);

// }


// int main()
// { 
    
//     if(~0==1) //it does not give 0  hence if is executed
//     {

//     }

// }


// int main()
// {
//     int y=0;
//     int z;
//     if (1|y==2)   //here value required as left operand error  1|6 exist  answer is error
//     {
//         cout<<"y is ok"<<y;
//     }
//     else
//     {
//         cout<<y <<"y is not ok";
//     }
    
// }

// int main()
// {
//     int y=0;
//     int z;
//     if (1&(y==2))   //here value required as left operand error  1|6 exist  answer is error
//     {
//         cout<<"y is ok"<<y;
//     }
//     else
//     {
//         cout<<y <<"y is not ok";
//     }
    
// }

// int main()
// {
//     int a=10,b=5,c=3;
//     b!=!a; //b=5  a=5
//     c=  !!a; //a=2 a=1
//     printf("%d %d",b,c);
// }

// int main()
// {
//     float x=0.1;
    
//     if(x==0.1)
//     {
//         cout<<"A";
//     }
//     else
//     {
//         cout<<"B";
//     }
    
// }

// int main()
// {
//     int a=13;
//     a=(~a);      //ans is -14
//     printf("%d",a);
// }


int main()   //there is no case in switch hence it will not execute expression inside switch
{
    int a;
    switch(a)
    {
        cout<<"Apache";
    }
    cout<<"Hero";
}
