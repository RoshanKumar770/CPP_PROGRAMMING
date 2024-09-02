#include<iostream>
using namespace std;
class Encap{
int a;
public:
     void set(int z){
          a=z;
     }
     int get(){
          return a;
     }
};
int main(){
     Encap obj1;
     obj1.set(4);
     cout<<obj1.get()<<endl;

     return 0;
}
// Abstraction  --> pow(x,y) --> hiding the process behind function