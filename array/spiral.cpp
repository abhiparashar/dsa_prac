#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
typedef std::vector<std::vector<int>> Matrix;

vector<int> printSpiralMatrix(Matrix &matrix)
{
  vector<int> ans;
  int row = matrix.size();
  int col = matrix[0].size();
  int top = 0;
  int left = 0;
  int bottom = row - 1;
  int right = col - 1;
  int count = 0;
  int total = row * col;
  while (count < total)
  {
    // printing starting row
    for (int i = left; count < total && i <= right; i++)
    {
      ans.push_back(matrix[top][i]);
      count++;
    }
    top++;
    // printing last col
    for (int i = top; count < total && i <= bottom; i++)
    {
      ans.push_back(matrix[i][right]);
      count++;
    }
    right--;
    // printing last row
    for (int i = right; count < total && i >= left; i--)
    {
      ans.push_back(matrix[bottom][i]);
      count++;
    }
    bottom--;
    // printing first col;
    for (int i = bottom; count < total && i >= top; i--)
    {
      ans.push_back(matrix[i][left]);
      count++;
    }
    left++;
  }
  return ans;
};
int main()
{
  Matrix vec;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> vec[i][j];
    }
  }
  // print
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << vec[i][j];
    }
  }
  printSpiralMatrix(vec);
  return 0;
}