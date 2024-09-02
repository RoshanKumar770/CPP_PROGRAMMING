#include <iostream>
using namespace std;
void printArr(int arr[],int size){
     // initilizating all location with 0
     int fourth[10] = {0};
     size = 10;
     cout<< endl<<"printing the array for all 0 " << endl;
     // print the array
     for (int i = 0; i < size; i++)
     {
          cout << arr[i] <<" ";
     }
}
int main()
{
     //(1)
     int number[4];
     cout <<endl<<"First is " << number<<endl;
     //(2)
     // initialising an array
     int second[] = {15, 7,8};
     // accesing an element cout < "Value at 2 index "
     cout<<"Second "<<second[2];
     //(3)
     int third[15] = { 2, 77};
     printArr(third, 15);
     cout<<endl<<"third size ";
     int thirdSize=sizeof(third)/sizeof(int);
     cout<<thirdSize;
     //4
     // initialising all locations with 0 
     int fourth[10] = {0};
     int n = 10;
     printArr(fourth, 10);
     //5
     // initialising all locations with 1 [not possible with below line
     int fifth[10] = {1};
     n = 10;
     printArr(fifth, 10);
     int fifthSize = sizeof(fifth) / sizeof(int);
     cout <<endl<<"Size of Fifth is " <<fifthSize <<endl;
     return 0;
}