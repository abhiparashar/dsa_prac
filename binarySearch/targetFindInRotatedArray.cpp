#include <iostream>
#include <vector>
using namespace std;
int targetFindInRotatedArray(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] == target)
      return mid;
    if (vec[start] <= vec[mid])
    {
      if (target > vec[start] and target <= vec[mid])
      {
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    else
    {
      if (target < vec[mid] and target <= vec[end])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }
  return -1;
};
int main()
{
  int target = 4;
  vector<int> vec = {3, 4, 5, 1, 2};
  int ans = targetFindInRotatedArray(vec, target);
  cout << ans << endl;
  return 0;
}