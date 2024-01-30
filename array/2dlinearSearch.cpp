#include <iostream>
using namespace std;
bool linearSearch(int arr[][4], int target, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      if (arr[i][j] == target)
      {
        return true;
      }
    }
  }
  return false;
};
int main()
{
  int row = 3;
  int col = 4;
  int arr[3][4];
  int target = 13;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cin >> arr[i][j];
    }
  }
  // print
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  if (linearSearch(arr, target, row, col))
  {
    cout << "found";
  }
  else
  {
    cout << "not found";
  }
  return 0;
}