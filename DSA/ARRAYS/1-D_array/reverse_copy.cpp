#include<iostream>
using namespace std;
int main(){
     int n=5;
     int arr2[n];
     for(int i=0;i<n;i++){
          arr2[i]=n-1-i;
          cout<<arr2[i]<<" ";
     }
     return 0;
}