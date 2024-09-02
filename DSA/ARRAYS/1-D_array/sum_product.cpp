#include<iostream>
using namespace std;
int main(){
     int s=0;
     int p=1;
     int arr[]={4,3,2,4,6};
     for(int i=0;i<5;i++){
          s+=arr[i];
     }
     cout<<"Sum "<<s<<endl;
     for(int i=0;i<5;i++){
          p*=arr[i];
     }
     cout<<"product "<<p<<endl;
     return 0;
}