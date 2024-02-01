#include <iostream>
using namespace std;
int largestOfOnes(int arr[][4], int row, int col)
{
  int maxCount = INT_MIN;
  int index = -1;
  for (int i = 0; i < 3; i++)
  {
    int count = 0;
    for (int j = 0; j < 4; j++)
    {
      if (arr[i][j] == 1)
      {
        count++;
      }
    }
    if (maxCount < count)
    {
      maxCount = count;
      index = i;
    }
  }
  if (maxCount == 0)
  {
    return -1;
  }
  return index;
};
int main()
{
  int arr[3][4];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  int ans = largestOfOnes(arr, 3, 4);
  cout << ans << endl;
  return 0;
}