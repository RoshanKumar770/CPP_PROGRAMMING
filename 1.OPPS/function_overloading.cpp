#include<iostream>         //Function overloading->define multiple functions with the same name 
using namespace std;
class Sum{
public:
     void add(int x, int y){
          int s=x+y;
          cout<<s<<endl;
     }
     void add(int x,int y,int z){
          int s=x+y+z;
          cout<<s<<endl;

     }
     float add( float x, float y){
          float s=x+y;
          cout<<s<<endl;
     }
};
int main(){
     Sum s;
     s.add(3,5);
     s.add(3,5,6);
     s.add(3.4f,3.6f);

     return 0;
}