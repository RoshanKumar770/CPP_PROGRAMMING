#include<iostream>
using namespace std;
int main(){
     int arr[]={2,3,4,5,6};
     int n=sizeof(arr)/sizeof(arr[0]);
     int i=0;
     int j=n-1;
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     while(i<j){
          int temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          i++;
          j--;
     }
     cout<<endl;
     for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}