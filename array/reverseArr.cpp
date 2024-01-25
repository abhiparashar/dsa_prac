#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 1, 1, 1, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = size - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  return 0;
}