// #include<iostream>
// code to delete the elements in the array
// using namespace std;
// int main()
// {
//     int n,x;
//     int arr[23];
//     cout<<"enter the number of the elements";
//     cin>>n;
//     cout<<"enter the ell the elements of the array";
//     for(int i=0;i<n;i++){
//     cin>>arr[i];
//     }
//     cout<<"enter the element that you want to remove";
//     cin>>x;
//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             for(int j=i;j<n-1;j++){
//                 arr[j] = arr[j+1];
//             }
//             break;
//         }
//     }
//     cout<<"the array after deletion is ";
//     for(int i=0;i<n-1;i++){
//     cout<<arr[i];
//     }
//     return 0;
    
//     }




// #include<iostream>
// using namespace std;
// //static bool(int arr[], int target){
    

// int main()
// {
//     int arr[] = {3,5,2,7,0,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 3;
  
  
//      bool flag =false;
//   for(int i=0;i<n-1;i++){
//       if(arr[i]==target){
//         flag = true;
        
//       break;
//   }
//   }
//   if(flag==true){
//       cout<<"element found";
//   }
//   else {
//       cout<<"element not found";
//   }
//   return 0;
// }



// #include<iostream>
// code for the linear search 
// #include<array>
// using namespace std;
// static  int linearsearch(int arr[], int target){
    
//     for(int i=0;i<5;i++){
//         if(arr[i]==target) return arr[i];
//     }
//     return -1;
// }
 
   
// int main()
// {
//     int arr[] = {1,2,3,4,5};
//     int target = 0;
//   cout<<"the elements"<<linearsearch(arr,0);
// }



// #include<iostream>
// using namespace std;
// static bool binarysearch(int arr[], int target){
//     int n = 6;
//     int lo = 0, hi = n-1;
//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         if(arr[mid]==target){
//             return true;
//         }
//         else if (arr[mid]>target){
//             hi = mid-1;
//         }
//         else {
//             lo = mid+1;
//         }
//         }
//         return false;
//     }

// int main()
// {
//     int arr[] = {2,4,6,8,10,12};
//     int target = 3;
//   cout<<"the elements"<< binarysearch(arr,3);
// }



// #include<iostream>
// using namespace std;
// static int binarysearch(int arr[], int target){
    
//      int n = 6;
//     int lo = 0, hi = n-1;
//     while(lo<=hi){
//         int mid = lo+(hi-lo)/2;
//         if(arr[mid]==target){
//             return arr[mid];
//         }
//         else if (arr[mid]>target){
//             hi = mid-1;
//         }
//         else {
//             lo = mid+1;
//         }
//     }
//         return -1;
    
//     }
//     int main()
//     {
//         int arr[] = {2,4,6,8,10,13};
//         int target = 12;
//         cout<<"elements found at index: "<<binarysearch(arr,12);
//     }






// #include<iostream>
// code for the bubble sort 
// using namespace std;
// static void display(int arr[]){
//     int n =8;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<" ";
// }
// static void bubblesort(int arr[]){
//     int n  =  8;
//     for(int x = 0;x<n-1;x++){
//     for(int i=0;i<n-1-x;i++){
//         if(arr[i]>arr[i+1]){
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }
    
//     }
// }
// int main()
// {
//     int arr[] = {2,3,4,5,6,7,8,1};
//     cout<<"array before sorting"<<endl;
//     display(arr);
//   cout<<"\n";
//     bubblesort(arr);
//     cout<<"arrayb after sorting "<<endl;
//     display(arr);
// }





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




