#include<iostream>
using namespace std;
int main(){
     int arr[]={4,3,2,47,93,9};
     int n=sizeof(arr)/sizeof(arr[0]);
     int max=INT_MIN;
     for(int i=0;i<n;i++){
          if(arr[i]>max){
               max=arr[i];
          }
     }
     cout<<"Max is "<<max;
     cout<<endl;
     int min=INT_MAX;
     for(int i=0;i<n;i++){
          if(arr[i]<min){
               min=arr[i];
          }
     }
     cout<<"Min is "<<min;
     return 0;
}