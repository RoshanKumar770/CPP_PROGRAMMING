#include <iostream>
using namespace std;

int main() {
    int age = 22;
    int *ptr = &age; 
    cout << "ptr=" << *ptr << endl;
    ptr++;
    cout << "ptr=" << *ptr << endl;
    ptr--;
    cout << "ptr=" << *ptr << endl;
    return 0;
}
