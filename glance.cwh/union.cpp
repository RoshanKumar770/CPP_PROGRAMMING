#include <iostream>
using namespace std;
union money
{                                     // THIS IS UNION
     int rice;
     char car;
     float pound;
};

int main()
{
     enum roll_no{aman,roshan,sumit,yash};        // THIS IS ENUM , WHERE CREATED NEW DATATYPE AS roll_no
     roll_no r1=aman;//                              WHICH INCREASE READIBILITY WITH INDEXING
     roll_no r2=roshan;
     roll_no r3=sumit;
     roll_no r4=yash;
     cout<<"Roll no of aman is "<<r1<<endl;
     cout<<"Roll no of roshan is "<<r2<<endl;
     cout<<"Roll no of sumit is "<<r3<<endl;
     cout<<"Roll no of yash is "<<r4<<endl;
     cout<<"We can check is "<<(r4==2)<<endl;      // ALSO WE CAN CHECK

     union money m1;
     union money m2;
     m1.car = 'c';                               // IN UNION WE CAN ONLY USE 1 MEMBER AT A TIME
     //                                             BECAUSE MEMORY IS BEING SHARED
     // m1.rice=23;
     // m1.pound=23.3;
     // cout<<"the value of rice is "<<m1.rice<<endl;
     // cout << "the value of rice is " << m1.car << endl;
     return 0;
}