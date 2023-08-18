#include<bits/stdc++.h>
using namespace std;

void mergearrays(int arr1[], int arr2[], int n1, int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        arr3[k++] = arr1[i++];
    }
    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
}

void heapify(int arr[], int size, int i) {
    int index = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = index;

    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }

    if (index != largest) {
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}

void build_heap(int arr[], int size) {
    for (int i = size / 2; i >= 0; i--) {
        heapify(arr, size, i);
    }
}

int main() {
    int arr1[] = {-1, 56, 44, 23, 12, 4};
    int arr2[] = {43, 6, 32, 5, 3, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n1 + n2];

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    mergearrays(arr1, arr2, n1, n2, arr3);

    for (int i = 0; i < n1 + n2; i++) {
        cout << arr3[i] << " ";
    }

    int n = n1 + n2;
    build_heap(arr3, n);

    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
