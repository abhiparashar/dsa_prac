#include <iostream>
using namespace std;
int main()
{
  int num = 5;
  cout << "address of" << num << "is->  " << &num << endl;
  int *ptr = &num;
  cout << "Address of ptr is " << ptr << endl;
  cout << "value of ptr is " << *ptr << endl;
  double num1 = 4.3;
  double *p2 = &num1;
  cout << "Address of ptr is " << p2 << endl;
  cout << "value of ptr is " << *p2 << endl;
  cout << "size of ptr is " << sizeof(ptr) << endl;
  cout << "size of ptr is " << sizeof(p2) << endl;

  return 0;
}