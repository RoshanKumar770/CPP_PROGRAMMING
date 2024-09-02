#include<iostream>
using namespace std;
class Rectangle{
public:
     int l;
     int b;
     Rectangle(){   // Default constructor - no arguments
          l=0;
          b=0;
     }
     Rectangle(int x,int y){  // Parametrise constructor- passing arguments
          l=x;
          b=y;
     }
     Rectangle(Rectangle& c){ // Copy condtructor - copy of another object
          l=c.l;
          b=c.b;
     }
};
int main(){
     Rectangle r1;  // Object 
     cout<<"length is "<<r1.l<<", breath is "<<r1.b<<endl;
     Rectangle r2(2,4);
     cout<<"Another length is "<<r2.l<<", Another breath is "<<r2.b<<endl;
     Rectangle r3=r2;
     cout<<"copy of length is "<<r3.l<<", copy of  breath is "<<r3.b<<endl;

     return 0;
}