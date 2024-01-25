#include <iostream>
using namespace std;
int main()
{
  int arr[] = {11, 29, 2, 8, 115};
  int size = sizeof(arr) / sizeof(arr[0]);
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  cout << min + max << endl;
  return 0;
}