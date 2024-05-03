#include <iostream>
#include <vector>
using namespace std;
int insertPos(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] >= target)
    {
      ans = mid;
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
  int target = 2;
  vector<int> vec = {1, 2, 4, 7};
  int ans = insertPos(vec, target);
  cout << ans;
  return 0;
}