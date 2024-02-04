#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int lindex = 1;
  int rindex = 3;
  int sum = 0;
  for (int i = lindex; i <= rindex; i++)
  {
    sum += arr[i];
  }
  cout << sum << endl;
}