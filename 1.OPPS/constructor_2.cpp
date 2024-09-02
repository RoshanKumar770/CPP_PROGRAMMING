#include<iostream>          // Parametrize constructor
using namespace std;
class Employee{
public:
string Name;
string Company;
int Age;
     void IntroduceYourself(){
          cout<<"Name -"<<Name<<endl;
          cout<<"Company -"<<Company<<endl;
          cout<<"Age -"<<Age<<endl;
     }
     Employee(string name,string company,int age){
          Name=name;
          Company=company;
          Age=age;
     }

};
int main(){
     Employee emp1 = Employee( "Roshan", "Apple", 22);
     emp1.IntroduceYourself();
     Employee emp2 = Employee( "Yash", "google", 22);
     emp2.IntroduceYourself();

     return 0;
}