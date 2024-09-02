#include<iostream>
using namespace std;
class Complex{
public:
     int real;
     int img;
     Complex (int x,int y){
          real=x;
          img=y;
     }
     Complex operator+ (Complex &c2){  // overloading the operator (+ , .) , Part of complie time polymorphism
          Complex ans(0,0);
          ans.real = real + c2.real;
          ans.img = img + c2.img;
          return ans;
     }
};
int main(){
     Complex c1(2,4);
     Complex c2(1,2);
//   c1+c2,c1.c2
     Complex c3=c1+c2;
     cout<<c3.real<<" "<<c3.img<<"i"<<endl;

     return 0; 
}