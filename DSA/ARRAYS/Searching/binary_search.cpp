#include<iostream>
using namespace std;
int main(){
     int arr[]={-2,2,5,6,8,10};
     int hi=5,lo=0,target=8;
     while(lo<=hi){
          int mid=(hi+lo)/2;
          if(arr[mid]==target){
               cout<<"Element found at index "<<mid<<endl;
               return 0;
          }
          else if(arr[mid]>target){
               hi=mid-1;
          }
          else{
               lo=mid+1;
          }
     }
     cout<<"Element not found"<<endl;
     return 0;
}