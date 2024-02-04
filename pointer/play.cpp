#include <iostream>
using namespace std;
int main()
{
  int num = 5;
  int a = num;
  a++;
  // cout << num << endl;
  int *p = &num;
  // cout << "before value " << num << endl;
  (*p)++;
  // cout << "after value " << num << endl;

  // copying a pointer
  int *q = p;
  cout << "value of " << p << " and value of q is " << q << endl;
  cout << "address of " << *p << " and address of q is " << *q << endl;
  return 0;
}