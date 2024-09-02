#include <iostream>
using namespace std;
int main()
{
  int var = 3;
  cout << "Simply value of var is : " << var << endl;
  int *ip;
  ip = &var;
  cout << "Address of var is : " << ip << endl;
  cout << "Value with help of pointer : " << *ip;

  cout << endl;

  var = 6;
  cout << "Updated value of var is : " << var << endl;
  int *it;
  it = &var;
  cout << "Address of var is : " << it << endl;
  cout << "Updated Value with help of pointer : " << *it;
  return 0;
}