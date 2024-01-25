#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 6, 5, 7, 10, 8, 9};
  int size = sizeof(arr) / sizeof(arr[0]);
  int num = -1;
  for (int i = 0; i < size; i++)
  {
    if ((arr[i - 1] < arr[i]) && (arr[i] < arr[i + 1]))
    {
      num = arr[i];
    }
  }
  cout << num << endl;
  return 0;
}