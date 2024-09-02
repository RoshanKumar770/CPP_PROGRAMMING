#include <iostream>
using namespace std;
int main()
{
     int row, col;
     cin >> row >> col;
     int arry[row][col];
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               cin >> arry[i][j];
          }
     }
     for (int i = 0; i < row; i++)
     {
          for (int j = 0; j < col; j++)
          {
               cout << arry[i][j] << " ";
          }
          cout << endl;
     }
     return 0;
}
