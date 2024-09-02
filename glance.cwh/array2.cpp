#include <iostream>
using namespace std;
int main()
{ // 2D ARRAY
     int arr2d[2][3] = {{1, 2, 3}, {11, 22, 33}};
     int i, j;
     for (i = 0; i < 2; i++)
     {
          for (j = 0; j < 3; j++)
          {
               cout << "The value at " << i << "," << j << " is " << arr2d[i][j] << endl;
          }
     }
}