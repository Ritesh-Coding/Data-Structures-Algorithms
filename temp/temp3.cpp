#include <bits/stdc++.h>
using namespace std;

int ceilSearch(int arr[], int low, int high, int x) {
	int mid = (low + high) / 2;
    static int index=-1;
    if(low>high)
    {
        return index; 
    }
	if (arr[mid] == x)
    {
        index=mid;
		return ceilSearch(arr,mid+1,high,x);
    }
	else if (arr[mid] < x) {
		if (mid + 1 <= high && x <= arr[mid + 1])
			return mid;
		else
			return ceilSearch(arr, mid + 1, high, x);
	}
	else {
		if (mid - 1 >= low && x > arr[mid - 1])
			return mid;
		else
			return ceilSearch(arr, low, mid - 1, x);
	}
}

int main() {
	int arr[] = { 1, 2, 8, 10, 10, 12, 19 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 8;
	int index = ceilSearch(arr, 0, n - 1, x);
	if (index == -1)
		cout << "Doesn't Exist";
	else
		cout << "Value at ceil index of " << x << " is " << index;

	return 0;
}