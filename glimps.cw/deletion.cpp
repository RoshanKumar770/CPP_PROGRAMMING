#include <iostream>
using namespace std;
int main()
{
     int n, x;
     int arr[5];
     cout<< "enter the number of the elements";
     cin>> n;
     cout << "enter the ell the elements of the array";
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     cout << "enter the element that you want to remove";
     cin >> x;
     for (int i = 0; i < n; i++)
     {
          if (arr[i] == x)
          {
               for (int j = i; j < n - 1; j++)
               {
                    arr[j] = arr[j + 1];
               }
               break;
          }
     }
     cout << "the array after deletion is ";
     for (int i = 0; i < n - 1; i++)
     {
          cout << arr[i]<<" ";
     }
     return 0;
}
