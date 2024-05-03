#include <iostream>
#include <vector>
using namespace std;
int findlower_bound(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  int ans = 9;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] >= target)
    {
      ans = vec[mid];
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
};
int main()
{
  int target = 9;
  vector<int> vec = {4, 4, 8, 8, 15, 16, 23, 23, 42};
  int ans = findlower_bound(vec, target);
  cout << ans;
  return 0;
}