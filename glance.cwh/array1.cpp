#include <iostream>
using namespace std;
int main()                            // 1 D ARRAY
{
     // int arr[]={10,3,4};
     // cout<<arr[1]<<endl;
     int marks[6];
     for (int i = 0; i < 6; i++)
     {          
          cout << "Enter the marks of " << i << "th student ";
          cin>>marks[i];
     }
     for (int i = 0; i < 6; i++)
     {          
          cout << "Marks of student " << marks[i] << endl;
     }
}