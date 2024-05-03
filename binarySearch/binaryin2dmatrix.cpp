#include <iostream>
#include <vector>
using namespace std;
bool serachMatrix(vector<vector<int>> &vec, int target)
{
  int n = vec.size();    // no. of rows
  int m = vec[0].size(); // no. of columns
  int low = 0;
  int high = n * m - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    int x = mid / m;
    int y = mid % m;
    if (vec[x][y] == target)
    {
      return true;
    }
    else if (vec[x][y] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return false;
};
int main()
{
  int target = 33;
  vector<vector<int>> vec = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
  bool ans = serachMatrix(vec, target);
  cout << ans;
  return 0;
}