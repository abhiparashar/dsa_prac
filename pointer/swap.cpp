#include <iostream>
using namespace std;
void swap(int a, int b)
{
  int *ptr1 = &a;
};
int main()
{
  int a, b;
  cin >> a >> b;
  swap(a, b);
  return 0;
}