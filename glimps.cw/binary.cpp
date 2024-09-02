#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int key) { 
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            return mid;
        }
        if (arr[mid] < key) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {12, 34, 45, 56, 67, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 45; 
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
