#include <iostream>
using namespace std;
bool checksorted(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      return false;
      break;
    }
  }
  return true;
};
int main()
{
  int arr[] = {0, 0, 0, 1};
  int size = 4;
  bool ans = checksorted(arr, size);
  cout << ans;
  return 0;
}