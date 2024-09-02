#include<iostream>
using namespace std;                              // A<---B
class Parent{
public:
     Parent(){
          cout<<"This is parents class"<<endl;
     }
};
class Child: public Parent{
public:
     Child(){
          cout<<"This is child class"<<endl;
     }
};
int main(){
     Child c;

     return 0;
}