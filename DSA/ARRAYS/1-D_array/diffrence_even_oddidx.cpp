#include<iostream>
using namespace std;
int main(){
     int arr[]={3,2,5,3,5,2,7,4,3};
     int size=sizeof(arr)/sizeof(arr[0]);
     int even=0;
     int odd=0;
     for(int i=0;i<size;i++){
          if(arr[i]%2==0){
               even=even+arr[i];
          }
          else{
               odd=odd+arr[i];
          }
     }
     cout<<"The diffrence of even and odd no.s are "<<even-odd;
     return 0;
}