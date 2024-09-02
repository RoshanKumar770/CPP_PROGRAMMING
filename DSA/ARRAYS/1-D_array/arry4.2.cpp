#include <iostream> // inputing the elements of arry
using namespace std;
int main()
{
// inputing an arry by using for_loop
     char vowels[5];
     for (int idx=0;idx<5;idx++){
          cout<<"Enter the elements of array ";
          cin>>vowels[idx];
     }
     cout<<"The elements of array are "<<vowels<<" "<<endl;
// inputing an arry by using for_each_loop
     // for (char &element:vowels){
     //      cin >>element;
     // }
     // for(int idx=0;idx<5;idx++){
     //      cout<<vowels[idx]<<" ";
     // }
     // return 0;
}