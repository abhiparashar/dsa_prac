#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 1, 0, 1, 1, 1, 0, 1, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int arr1[size];
  int maxSum = INT_MIN;
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == 1)
    {
      count++;
      maxSum = max(count, maxSum);
    }
    if (arr[i] == 0)
    {
      count = 0;
    }
  }
  cout << maxSum << endl;
  return 0;
}