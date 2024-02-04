// Q1 - Given a 2D matrix with m rows and n columns containing integers, find and print the
// maximum value present in the array.

// (Easy)

// m=3
// n=3
// arr[] = {{1,2,3}, {4,5,6}, {7,8,9}}
#include <iostream>
using namespace std;
int findMaxVal(int arr[][3], int row, int col)
{
  int maxVal = INT_MIN;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (maxVal < arr[i][j])
      {
        maxVal = arr[i][j];
      }
    }
  }
  return maxVal;
};
int main()
{
  int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  int ans = findMaxVal(arr, 3, 3);
  cout << ans << endl;
  return 0;
}