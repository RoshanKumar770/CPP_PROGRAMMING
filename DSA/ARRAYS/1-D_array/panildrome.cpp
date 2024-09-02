#include <iostream>
using namespace std;
int main(){
    int arr[]={8,1,2,3,2,1,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i;
    for (i=0;i<n/2;i++){
        if (arr[i]!=arr[n-i-1]){
            cout<<"The array is not a palindrome."<<endl;
            break;
        }
    }
    if (i==n/2){
        cout<<"The array is a palindrome."<<endl;
    }
    return 0;
}