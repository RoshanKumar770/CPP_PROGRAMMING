#include<iostream>                // printing size and elements
using namespace std;               //Travsing the arry
int main()
{
     int arr[]={5, 3, 23, 23, 87};
     //cout << sizeof(arr) << endl;
     //cout << sizeof(arr) / sizeof(arr[0]) << endl;
     int size = sizeof(arr)/sizeof(arr[0]);
     // for loop
     for (int i=0;i<size;i++){
          cout << arr[i]<<" ";
     }
     cout<<endl;
     // for each loop
     for(int ele:arr){
          cout<<ele<<" ";
     }
     cout<<endl;
     // while
     int i=0;
     while(i<size){
          cout<<arr[i]<<" ";
          i++;
     }
}