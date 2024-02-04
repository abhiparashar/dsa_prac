#include <iostream>
#include <algorithm>
using namespace std;
void rotate(int arr[][3], int row, int col)
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }
  for (int i = 0; i < 3; i++)
  {
    reverse(begin(arr[i]), end(arr[i]));
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
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
  cout << endl;
  rotate(arr, 3, 3);
  return 0;
}