#include <iostream>
#include <algorithm>
using namespace std;
int (&rotateBy90(int (&arr)[3][3]))[3][3]
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < i; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }
  // // Reverse each row
  for (int i = 0; i < 3; i++)
  {
    reverse(begin(arr[i]), end(arr[i]));
  }
  return arr;
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
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  cout << endl;
  int(&arr1)[3][3] = rotateBy90(arr);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}