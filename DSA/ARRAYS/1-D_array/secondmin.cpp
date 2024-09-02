#include<iostream>
using namespace std;
int main(){
     int arr[]={34,54,23,545,16};
     int n=sizeof(arr)/sizeof(arr[0]);
     int min=INT_MAX;
     for(int i=0;i<n;i++){
          if(arr[i]<min){
               min=arr[i];
          }
     }
     int smin=INT_MAX;
     for(int i=0;i<n;i++){
          if(arr[i]!=min){
               if(arr[i]<smin){
                    smin=arr[i];
               }
          }
     }
     cout<<min<<endl;
     cout<<smin;
     return 0;
}