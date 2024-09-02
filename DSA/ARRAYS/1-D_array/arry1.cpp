#include <iostream>
using namespace std;
int main()
{
     int first[4];
     cout << "value is " << first << endl;

     int second[3] = {2, 34, 5};
     cout << "value at index 2 is " << second[2] << endl;

     int n = 15;
     int third[15] = {12, 7};
     cout << "printing the array "<< endl;
     // print the array
     for (int i = 0; i < n; i++)
     {
          cout << third[i] << " ";
     }

     // initilizating all location with 0
     int fourth[10] = {0};
     n = 10;
     cout << endl<< "printing the array for all 0 " << endl;

     // print the array
     for (int i = 0; i < n; i++)
     {
          cout << fourth[i] << " ";
     }
     
     // initilizating all location with 1
     int fifth[12] = {1};
     int no = 12;
     cout << endl<< "printing the array for all 0 " << endl;
     for (int i = 0; i < no; i++)
     {
          cout << fifth[i] << " ";
     }
     return 0;
}