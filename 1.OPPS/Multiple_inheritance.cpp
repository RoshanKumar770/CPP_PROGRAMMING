#include<iostream>
using namespace std;
class Parent1{//                                             A     A
public://                                                       |
     Parent1(){//                                               B
          cout<<"This is parent 1 class"<<endl;
     }
};
class Parent2{
public:
     Parent2(){
          cout<<"This is Parent 2 class "<<endl;
     }
};
class Child:Parent1,Parent2{
public:

     Child(){
          cout<<"This is child class"<<endl;
     }
};
int main(){
     Child ch;
     
     return 0;
}