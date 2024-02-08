#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (arr[i] == 0)
      {
        swap(arr[i], arr[j]);
      }
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}