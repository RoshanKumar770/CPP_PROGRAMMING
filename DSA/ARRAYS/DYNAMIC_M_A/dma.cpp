#include<iostream>                  // Dynamic memory allocation - suppose we want the user to input the elements of 
using namespace std;                // array but we don't know what will the size and how much user will enter , we roughly
int main(){                         // give arr[100], but if user need more, DMA comes into picture in this we use pointer
                                    // to allocate dyanmic range of values according to user need.
  int size;
  int *ptr;

  cout << "Enter the size of array: ";
  cin >> size;
  
  ptr = new int[size]; // dynamic allocation
  cout << "Enter the elements of array: ";
  for (int i = 0; i < size; i++)
  {
    cin >> ptr[i];
  }
  cout << "The array is :" << endl;
  for (int i = 0; i < size; i++)
  {
    cout << ptr[i] << " ";
  }
  return 0;
}