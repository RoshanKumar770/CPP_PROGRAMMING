#include<iostream>
using namespace std;

class Fruits{
public:
     string name;    // both are property
     string color;

};
int main(){
     Fruits apple;//  Object declaration
     apple.name = "Apple";
     apple.color="Red";
     cout<<apple.name<< " - "<< apple.color<<endl;

     Fruits *mango = new Fruits();//  Other way to declare object
     mango->name = "Mango";
     mango->color = "Yellow";
     cout<<mango->name<<" - "<<mango->color<<endl;

     return 0;
     
}