#include <iostream>
using namespace std;
void swapPtr(int *ptr1, int *ptr2)
{
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
};
int main()
{
  int x = 10;
  int y = 20;
  int *ptr1 = &x;
  int *ptr2 = &y;
  swapPtr(ptr1, ptr2);
  cout << x << " " << y;
  return 0;
}