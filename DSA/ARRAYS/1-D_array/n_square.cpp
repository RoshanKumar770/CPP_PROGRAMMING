#include<iostream> 
using namespace std;
int main(){
     int n;
     cout<<"Enter the size ";
     cin>>n;
     for(int i=1;i<=n;i++){
          int sq=i*i;
          cout<<sq<<" ";
     }
     return 0;
}