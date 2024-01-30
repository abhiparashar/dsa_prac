#include <iostream>
using namespace std;
void largestSum(int arr[][3], int row, int col)
{
  int maxSum = INT_MIN;
  int rowIndex = -1;
  for (int i = 0; i < 3; i++)
  {
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
      sum = sum + arr[i][j];
    }
    if (sum > maxSum)
    {
      maxSum = sum;
      rowIndex = i;
    }
  }
  cout << maxSum << endl;
  cout << rowIndex << endl;
};
int main()
{
  int arr[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }
  // print
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  largestSum(arr, 3, 3);
  return 0;
}