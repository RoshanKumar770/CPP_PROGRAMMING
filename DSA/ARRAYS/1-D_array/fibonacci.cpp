#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of fabonacci ";
    cin>>n;
    int fab;
    int first=0;
    int second=1;
    for(int i=0;i<n;i++){
        if(i<=1){
            fab=i;
        }
        else{
            fab=first+second;
            first=second;
            second=fab;
        }
        cout<<fab<<" ";
    }
    return 0;
}