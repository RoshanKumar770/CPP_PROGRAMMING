#include<iostream>
using namespace std;                    //BASIC STRUCTURE
struct employee{
     int id;
     char firstC;
     float salary;
     };
     
int main(){
     struct employee roshan;
     struct employee aman;
     struct employee sumit;
     struct employee abhi;
     
     roshan.id=3;
     roshan.firstC='R';
     roshan.salary=100000;
     cout<<"This is my id "<<roshan.id<<endl;
     cout<<"This is my first character "<<roshan.firstC<<endl;
     cout<<"This is my salary "<<roshan.salary<<endl;
     return 0;
}
// #include<iostream>                           ADVANCE STRUCTURE
// using namespace std;
// typedef struct employee{
//      int id;
//      char firstC;
//      float salary;
//      } ro;
// int main(){
//      ro roshan;
//      ro aman;
//      ro sumit;
//      ro abhi;
//      roshan.id=3;
//      roshan.firstC='R';
//      roshan.salary=100000;
//      cout<<"This is my id "<<roshan.id<<endl;
//      cout<<"This is my id "<<roshan.firstC<<endl;
//      cout<<"This is my id "<<roshan.salary<<endl;
// }