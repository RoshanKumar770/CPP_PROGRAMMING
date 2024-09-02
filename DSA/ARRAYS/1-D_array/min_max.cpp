#include<iostream>
using namespace std;
int getmin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getmax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    int arr[50];
    int n;
    cout<<"Enter the size of  array ";
    cin>>n;
    cout<<"Enter the elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The max element is "<<getmax(arr,n)<<endl;
    cout<<"The min element is "<<getmin(arr,n)<<endl;

    return 0;
}