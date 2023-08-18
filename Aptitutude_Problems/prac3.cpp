#include<iostream>
using namespace std; 
class IndiaBix
{
    int K; 
    public:
    void BixFunction(float, int , char);
    void BixFunction(float, char, char);
    
};
int main()
{
    IndiaBix objIB;
    objIB.BixFunction(15.09, 'A', char('A' + 'A'));
    return 0;
}
void IndiaBix::BixFunction(float, char y, char z)
{
    K = int(z);
    K = int(y);
    K = y + z;
    cout<< "K = " << K << endl; 
}