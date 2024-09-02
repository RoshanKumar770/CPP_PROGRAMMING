#include<iostream>                    // diamound problem->     A
                                                            // / \
                                                            //B   C
                                                            // \ /
                                                            //  D      to solve we use virtual class technique
using namespace std;//                                                 so that grandchild inherit from parent only 
class Parent{//                                                        once.
public:
     Parent(){
          cout<<"This is Parent class"<<endl;
     }     
};
class child1: virtual public Parent{
public:
     child1(){
          cout<<"This is child1 class"<<endl;
     }
};
class child2: virtual public Parent{
public:
     child2(){
          cout<<"This is child2 class"<<endl;
     }
};
class grandchild:public child1, public child2{
public:
     grandchild(){
          cout<<"This is grandchild class"<<endl;
     }
};
int main(){
     grandchild gd;
     return 0;
}