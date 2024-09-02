#include<iostream>
using namespace std;
int main(){
     int arr[]={3,2,5,3,27,5,8,34,6};
     int n=sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<n;i++){
          int min=INT_MAX;
          int mindx=-1;
          for(int j=i;j<n;j++){
               if(arr[j]<min){
                    min=arr[j];
                    mindx=j;
               }
          }
          swap(arr[i],arr[mindx]);
     }
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}