#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 1, 2, 2, 2, 3, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  int newIndex = 1;
  for (int i = 1; i < size - 1; i++)
  {
    if (arr[i] != arr[i + 1])
    {
      arr[newIndex] = arr[i + 1];
      newIndex++;
    }
  }
  for (int i = 0; i < newIndex; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}