#include<iostream>
using namespace std;
class Abstract{
public:
     virtual void AskforPromotion()=0;
};
class Employ :Abstract{
private:
     string Name;
     string Company;
     int Age;
public: 
     void setName(string name){
          Name=name;
     }
     string getName(){
          return Name;
     }
     void setCompany(string company){
          Company=company;
     }
     string getCompany(){
          return Company;
     }
     void setAge(int age){
          Age=age;
     }
     int getAge(){
          return Age;
     }
     Employ(string name,string company,int age){
          Name=name;
          Company=company;
          Age=age;
     }

     void AskforPromotion(){
          if(Age>=30){
               cout<<Name<<" you got promoted"<<endl;
          }
          else{
               cout<<Name<<" sorry! Not Promoted"<<endl;
          }
     }

};
int main(){
     Employ emp1 = Employ( "Roshan", "Apple", 22);
     Employ emp2 = Employ("John", "Amazon", 35);    

     emp1.AskforPromotion();
     emp2.AskforPromotion();

     return 0;
}