#include <iostream>
using namespace std;
int findLargestIndex(int arr[], int size)
{
  int max = INT_MIN;
  int maxIndex = -1;
  for (int i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
      maxIndex = i;
    }
  }
  return maxIndex;
}
int main()
{
  int arr[] = {2, 3, 4, 7, 6, 7, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int largestIndex = findLargestIndex(arr, size);
  cout << largestIndex << endl;
  // int largestelem = arr[largestIndex];
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == arr[largestIndex])
    {
      arr[i] = -1;
    }
  }
  for (int i = 0; i < size; i++)
  {
    cout << "Ele" << i << " " << arr[i] << endl;
  }

  // secondlargestIndex = findLargestIndex(arr, size);
  int secondLargestElement = findLargestIndex(arr, size);
  cout << secondLargestElement << endl;
  cout << arr[secondLargestElement] << endl;
  return 0;
}