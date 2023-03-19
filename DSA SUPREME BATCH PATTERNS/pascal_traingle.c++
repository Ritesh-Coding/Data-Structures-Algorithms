// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binomial_Coeff(int n, int k)
{
    int res = 1;
    if (k > n - k)
    k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
     
    return res;
}
int main()
{
    for (int row = 0; row < 7; row++)
    {
        for (int col = 0; col < row+1; col++)
        {
            int temp= binomial_Coeff(row,col);
            cout<<temp;
        }
        cout<<endl;
    }    

}
