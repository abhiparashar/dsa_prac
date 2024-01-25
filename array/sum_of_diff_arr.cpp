#include <iostream>
using namespace std;
int main()
{
  int arr1[] = {5, 6, 10, 4, 9};
  int arr2[] = {1, 2, 3, 4, 5};
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int min1 = INT_MAX;
  int min2 = INT_MAX;
  for (int i = 0; i < size1; i++)
  {
    min1 = min(arr1[i], min1);
  }
  for (int i = 0; i < size2; i++)
  {
    min2 = min(arr2[i], min2);
  }
  cout << min1 + min2 << endl;
  return 0;
}