

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A = 2; // Replace with your desired value of A
    int K = 5; // Replace with the desired value of K

    int sum = 0;
    int power = 1;

    for (int i = 0; i <= K; i++) {
        sum += power;
        power *= A;
        cout<<sum<<"   ";
        cout<<power<<"      ";
    }

    cout << "The sum of 1 + A + A^2 + A^3 + ... + A^" << K << " is " << sum << endl;

    return 0;
}