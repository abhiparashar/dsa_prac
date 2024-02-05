#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int k = 2;
  int n = sizeof(arr) / sizeof(arr[0]);
  int j = 0;
  int arr1[n];
  for (int i = n - k; i < n; i++)
  {
    arr1[j++] = arr[i];
  }
  for (int i = 0; i < n - k; i++)
  {
    arr1[j++] = arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr1[i] << " ";
  }
  return 0;
}