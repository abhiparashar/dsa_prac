#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int min_num = INT_MAX;
  int max_num = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    max_num = max(arr[i], max_num);
    min_num = min(arr[i], min_num);
  }
  cout << min_num + max_num << endl;
  return 0;
}