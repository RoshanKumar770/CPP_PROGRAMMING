// #include<iostream>            //sum of array
// using namespace std;
// int main(){
//      int n;
//      cout<<"Enter the size of array "<<endl;
//      cin>>n;
//      int arry[n];
//      cout<<"Enter the elements of array ";
//      for(int i=0;i<n;i++){
//           cin>>arry[i];
//      }

//      //int size=sizeof(arry)/sizeof(arry[0]);
//      int sum=0;
//      for(int i=0;i<n;i++){
//           sum+=arry[i];
//      }
//      cout<<"sum is "<<sum<<endl;
//      return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//      int arr[5];
//      cout<<"Enter the elements of array: ";
//      for(int i=0;i<5;i++){
//           cin>>arr[i];
//      }
//      cout<<"The elements of array are: ";
//      for(int i=0;i<5;i++){
//           cout<<arr[i]<<" ";
//      }
//      return 0;
// }
#include<iostream>
using namespace std;
int main(){
     int A[3];
     int B[3];
     cout<<"Enter the elements for array A: ";
     for(int i=0;i<3;i++){
          cin>>A[i];
     }
     cout<<"Enter the elements for array B: ";
     for(int i=0;i<3;i++){
          cin>>B[i];
     }
     cout<<"Addition of array A and B : ";
     for(int i=0;i<3;i++){
          cout<<A[i]+B[i]<<" ";
     }
     cout<<endl<<"Substraction of array A and B: ";
     for(int i=0;i<3;i++){
          cout<<A[i]-B[i]<<" ";
     }
     cout<<endl<<"Multiplication of array A and B: ";
     for(int i=0;i<3;i++){
          cout<<A[i]*B[i]<<" ";
     }
}