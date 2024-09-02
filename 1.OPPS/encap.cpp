#include<iostream>
using namespace std;
class Employee {
private:
     string Name;
     string Company;              // This is hidden data 
     int Age;
public:
     void setName(string name){//setter
          Name=name;
     }
     string getName(){//getter
           return Name;
     }

     void setCompany(string company){
          Company=company;
     } 
     string getCompany(){
           return Company;
     }

     void setAge(int age){
          if(age>=18)
          Age=age;
     }
     int getAge(){
           return Age;
     }
};
int main(){
     Employee emp1;
     emp1.setName("Roshan");
     emp1.setCompany("Apple.Inc");
     emp1.setAge(20);
     //Employee emp1 = Employee("Saldina", "YT-CodeBeauty", 25);
     cout<<"Name :"<<emp1.getName()<<endl<<"Company :"<<emp1.getCompany()<<endl<<"Age :"<<emp1.getAge()<<endl;
     Employee emp2;
     emp2.setName("Yash");
     emp2.setCompany("Google.Inc");
     emp2.setAge(15);
     cout<<"Name :"<<emp2.getName()<<endl<<"Company :"<<emp2.getCompany()<<endl<<"Age :"<<emp2.getAge()<<endl;
     return 0;
}