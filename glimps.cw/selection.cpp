#include<iostream>
using namespace std;
static void display(int arr[]){
    int n = 9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" ";
}
static void selectionsort(int arr[]){
    int n = 9;
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
int main()
{
    int arr[] = {2,3,5,1,0,4,8,6,9};
    cout<<"array before sorting"<<endl;
    display(arr);
    cout<<"\n ";
    selectionsort(arr);
    cout<<"array after sorting"<<endl;
    display(arr);
}