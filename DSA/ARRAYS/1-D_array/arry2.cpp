#include <iostream>
using namespace std;

void printArray(char arr[],int size){
    cout<<"function"<<endl;
    arr[0]='s';// updating the value
    cout << "Printing the array:"<< endl;
    // Print the array
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl << "Printing DONE" << endl;
}

int main() {
    char ch[5] = {'a', 'b', 'c', 'r', 'p'};
    // Accessing the last element of the array
    cout <<"First "<<ch[4] << endl;

    cout << "Printing the array:" << endl;
    // Print the array
    cout<<"Second"<<endl;
    for (int i = 0; i < 5; i++) {
        cout <<ch[i] << " ";
    }
    // for function
    cout<<endl<<"Third ";
    printArray(ch,5);
    return 0;
}
