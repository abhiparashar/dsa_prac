#include <iostream>
using namespace std;
int findSecondlargestNumber(int arr[], int size)
{
  int max = INT_MIN;
  int secondLargestnumber = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (secondLargestnumber < arr[i] && max != arr[i])
    {
      secondLargestnumber = arr[i];
    }
  }
  return secondLargestnumber;
}
int main()
{
  int arr[] = {2, 3, 4, 7, 6, 7, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int elem = findSecondlargestNumber(arr, size);
  cout << elem << endl;
  return 0;
}