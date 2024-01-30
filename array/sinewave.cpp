#include <iostream>
using namespace std;
vector<int> printSineWave(int arr[][2], int rows, int cols)
{
  vector<int> ans;
  for (int col = 0; col < cols; col++)
  {
    if (col & 1)
    {
      for (int row = rows - 1; row >= 0; row--)
      {
        ans.push_back(arr[row][col]);
      }
    }
    else
    {
      for (int row = 0; row < rows; row++)
      {
        ans.push_back(arr[row][col]);
      }
    }
  }
  return ans;
};
int main()
{
  int arr[2][2];
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }
  // print
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
    cout << endl;
  }
  // print sine wave
  printSineWave(arr, 2, 2);
  return 0;
}