#include<iostream>
using namespace std;
int main(){
float a=34.23;
float *ptr = &a;
cout<<"The value of a is "<<(int)a<<endl; // TYPE CASTING
cout<<"The value of a is "<<*ptr<<endl;
cout<<"The address of a is "<<&a<<endl;
cout<<"The address of a is "<<ptr<<endl;
}