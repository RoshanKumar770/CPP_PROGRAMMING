#include <iostream>
using namespace std;
void insertElement(int arr[], int& n, int pos, int element) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position\n";
        return;
    }
    for (int i = n; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    ++n; 
}
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5; 
    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int position = 2; 
    int element = 10; 
    insertElement(arr, size, position, element);
    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
