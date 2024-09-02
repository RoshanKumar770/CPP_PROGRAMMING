#include<iostream>
using namespace std;
class problema{
     public:
     string name;
     int roll;
     bool gender;
     void out(){
          cout<<name<<endl;
          cout<<roll<<endl;
          cout<<gender<<endl;
     }
};
int main(){
     problema p;
     p.name='roshan';
     p.roll=24;
     p.gender=1;
     void out();
}