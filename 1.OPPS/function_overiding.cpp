#include<iostream>    // function overiding- At compile time which function is choose/called of same function name
using namespace std; //                  part of runtime polymorphism
class Parent{
public:
     virtual void print(){//        Using virtual to overide the print fuction 
          cout<<"This is virtual Parent class"<<endl;
     }
     void show(){
          cout<< "This is show Parent"<<endl;
     }
};
class Child: public Parent{
public:
     void print(){
          cout<<"This is normal Child class"<<endl;
     }
     void show(){
          cout<<"This is show Child class"<<endl;
     }

};
int main(){
     Parent *p;
     Child c;
     p=&c; //  At runtime we assign object of child to object of parent
     p->print();
     p->show();

     return 0;
}