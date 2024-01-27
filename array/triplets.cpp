#include <iostream>
using namespace std;
int main()
{
  int arr[] = {3, 1, 2, 4, 0, 6};
  int target = 7;
  int length = sizeof(arr) / sizeof(arr[0]);
  int pairs = 0;
  for (int i = 0; i < length; i++)
  {
    for (int j = i + 1; j < length; j++)
    {
      for (int k = j + 1; k < length; k++)
      {
        if (target == arr[i] + arr[j] + arr[k])
        {
          pairs++;
        }
      }
    }
  }
  cout << endl;
  cout << pairs << endl;
  return 0;
}