#include<iostream>
using namespace std;
class car{
        public:
        int weight  = 45;
};
class scorpio : public car{   //here we have done single level inheritance
        public:
        int age =65;     
        int weight=98;                      
};

class scorpio_sun : public scorpio{  //here we have done multilevel inheritance   //here we have ambiguity problem hence we use scope resolution opertor while calling  the weight property by object_name.car::weight     //in place of car you can write scorpio
    public:
     int color=98;              
}; 

class supercar : public car,public scorpio_sun{   //heirchical inheritance 
    public:
    int price =562;
};


class sabkabaap : public supercar{   //hybrid inheritance

};







int main()
{
    car c;
    scorpio s;
    scorpio_sun s1;
    supercar  p;


    cout<<p.price; 
        
    return 0;
}