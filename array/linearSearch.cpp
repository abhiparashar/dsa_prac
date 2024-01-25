#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, 9, 18, 11, 7};
  int key = 18;
  int size = sizeof(arr) / sizeof(arr[0]);
  int ans = -1;
  for (int i = 0; i < size; i++)
  {
    if (key == arr[i])
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}