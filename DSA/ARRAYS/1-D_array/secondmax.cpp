#include<iostream>
using namespace std;
int main(){
     int arr[]={4,3,7,58,3,4,6,100};
     int n=sizeof(arr)/sizeof(arr[0]);
     int max=INT_MIN;
     for(int i=0;i<n;i++){
          if(arr[i]>max){
               max=arr[i];
          }
     }
     int smax=INT_MIN;
     for(int i=0;i<n;i++){
          if(arr[i]!=max){ 
               if(arr[i]>smax){
                    smax=arr[i];
          }
          }
     }
     cout<<max<<endl;
     cout<<smax;

     return 0;
}