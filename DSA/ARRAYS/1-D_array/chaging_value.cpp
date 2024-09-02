#include<iostream>
using namespace std;
void change(int arr[]){
     arr[0]=0;
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
}
int main(){
     int arr[]={3,2,4,7,9};
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     change(arr);
     return 0;
}