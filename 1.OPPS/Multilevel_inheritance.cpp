#include<iostream>
using namespace std;                            //   A<--B
class Parent{                                   //   ^
public:                                          //  C
     Parent(){                                                   
          cout<<"This is parent class"<<endl;                    
     }
};
class Child:public Parent{                                            
public:
     Child(){
          cout<<"This is child class"<<endl;
     }
};
class Grandchild: public Child{
public:
     Grandchild(){
          cout<<"This is grandchild class"<<endl;
     }

};
int main(){
     Grandchild G;
     return 0;
}