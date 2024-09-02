#include<iostream>
using namespace std;
int main(){
     int arr[]={4,20,15,3,2,7};
     int target=2;
     int value=0;
     for(int i=0;i<6;i++){
          if(arr[i] == target){
               value=i;
               cout<<"Element found at index "<<i<<endl;
               return 0;
          }
     }
     cout<<"Element not found";
     return 0;
}