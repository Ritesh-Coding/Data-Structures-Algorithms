#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr;

    vector<int> a{1,2,3};
    vector<int> b{4,5,6};

    arr.push_back(1);
    arr.push_back(2); //these compiler gives me error for arr.push_back(b);




    return 0;
}