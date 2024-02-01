#include <iostream>
using namespace std;

void swapColumns(int arr[3][3], int col1, int col2)
{
  for (int i = 0; i < 3; i++)
  {
    swap(arr[i][col1], arr[i][col2]);
  }
}

int main()
{
  int arr[3][3];

  // Input matrix
  cout << "Enter 3x3 matrix:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> arr[i][j];
    }
  }

  // Display original matrix
  cout << "Original Matrix:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Swap the 1st and 3rd columns
  swapColumns(arr, 0, 2);

  // Display matrix after swapping columns
  cout << "Matrix after swapping 1st and 3rd columns:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
