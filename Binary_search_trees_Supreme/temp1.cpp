
#include <bits/stdc++.h>
using namespace std;

void getIndex(vector<int> v, int K)
{
	auto it = find(v.begin(), v.end(), K);

	// If element was found
	if (it != v.end())
	{
	
		// calculating the index
		// of K
		int index = it - v.begin();
		cout << v[index - 1]<< endl;
	}
	else {
		// If the element is not
		// present in the vector
		cout << "-1" << endl;
	}
}
// Driver Code
int main()
{
	// Vector
	vector<int> v = { 1, 45, 54, 71, 76, 17 };
	// Value whose index
	// needs to be found
	int K = 54;
	getIndex(v, K);
	return 0;
}
