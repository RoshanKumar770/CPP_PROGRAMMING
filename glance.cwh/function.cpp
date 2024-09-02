#include <iostream>
using namespace std;
// int loop(int u,int v){
//      while(u<=v){
//           int u;
//           cout<<"you can vote"<<u;
//           cout<<"they voter who can't vote are \n"<<u;
//           u=u-1;

//      }
// }
int add(int a, int b)
{
     int c;
     c = a + b;
     return c;
}
int main()
{
     int a, b;
     cout << "Enter the first value ";
     cin >> a;
     cout << "Enter the second value ";
     cin >> b;
     cout << "The sum is " << add(a, b) << endl;
     // cout<<"Enter your age ";
     // cin>>u;
     // cout<<"Enter the vote limit ";
     // cin>>v;
     return 0;
}