#include <iostream>
using namespace std;
int main()
{
  int num1 = 5;
  int num2 = 3;
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  int product = *ptr1 * *ptr2;
  cout << product << endl;
  return 0;
}