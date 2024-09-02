#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key) { 
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {12, 45, 67, 89, 34, 56};
    int n=7;
    int key = 34;
    int result = linearSearch(arr, n, key);
    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
