#include<iostream>
using namespace std;
int main(){
     int arr[]={4,3,5,2,6,2,1};
     int x=4;
     int count=0;
     for(int i=0;i<7;i++){
          if(arr[i]<x){
               count++;
          }
     }
     cout<<"Total no. of elements less the 4 are "<<endl<<count;
     return 0;
}