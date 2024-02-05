#include <iostream>
using namespace std;
int findsecLargest(int arr[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  return max;
};
int main()
{
  int arr[7] = {1, 2, 3, 4, 7, 6, 7};
  int size = 7;
  int max = findsecLargest(arr, size);
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == max)
    {
      arr[i] = -1;
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  // int secLargest = findsecLargest(arr, size);
  // cout << secLargest;
  return 0;
}