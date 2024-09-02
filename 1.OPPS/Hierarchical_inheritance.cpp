#include<iostream>
using namespace std;
class Parent{
public:
     Parent(){
          cout<<"This is parent class"<<endl;
     }
};
class Child1:Parent{
public:
     Child1(){
          cout<<"This is child 1 class "<<endl;
     }
};
class Child2:Parent{
public:

     Child2(){
          cout<<"This is child 2 class"<<endl;
     }
};
int main(){
     Child2 c;

     
     return 0;
}