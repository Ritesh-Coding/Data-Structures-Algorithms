#include<iostream>
using namespace std; 
class Bix
{
    int x, y; 
    public:
    void show(void);
    void main(void);
};
void Bix::show(void)
{ 
    Bix b;
    b.x = 2;
    b.y = 4;
    cout<< x << " " << y;
}
void Bix::main(void)
{
    Bix b;
    b.x = 6; 
    b.y = 8;
    b.show();
}
int main(int argc, char *argv[])
{
    Bix run;
    run.main();
    return 0; 
}