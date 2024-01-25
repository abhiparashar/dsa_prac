#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, 7, 18, 9, 11};
  int max = INT_MIN;
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  cout << max << endl;
  return 0;
}