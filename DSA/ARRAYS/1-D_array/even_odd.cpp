#include<iostream>
using namespace std;
int main(){
     int arr[]={5,4,3,2,7,4,6};
     int size=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){
          if(arr[i]%2==0){
               arr[i]=arr[i]*2;
          }
          else{
               arr[i]=arr[i]+10;
          }
          cout<<arr[i]<<" ";
     }
     return 0;
}