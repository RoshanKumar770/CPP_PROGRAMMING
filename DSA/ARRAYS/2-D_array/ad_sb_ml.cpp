#include<iostream>
using namespace std;
int main(){
  // int arr[3][3];
  // cout<<"Enter the elements of array: ";
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cin>>arr[i][j];
  //   }
  // }
  // cout<<"The elements of the array are:"<<endl;
  // for(int i=0;i<3;i++){
  //   for(int j=0;j<3;j++){
  //     cout<< arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }
  int A[3][3],B[3][3],sum[3][3],sub[3][3],mul[3][3];
  cout<<"Enter the elements of A: ";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>A[i][j];
    }
  }
  cout<<"Enter the elements of B: ";
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin>>B[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sum[i][j]=A[i][j]+B[i][j];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      sub[i][j]=A[i][j]-B[i][j];
    }
  }
  cout<<"Matrix addition"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Matrix subtraction"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<sub[i][j]<<" ";
    }
    cout<<endl;
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      mul[i][j]=A[i][j]*B[i][j];
    }
  }
  cout<<"Matrix multiplication"<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<mul[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}