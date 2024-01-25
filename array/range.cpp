#include <iostream>
using namespace std;

int main()
{
  int arr[] = {3, 0, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
  int range_sum = (size) * (size + 1) / 2;
  int missing = range_sum - sum;
  cout << missing << endl;
  return 0;
}
