#include <iostream>
#include <vector>
using namespace std;
int findfirstOccurance(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] == target)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (vec[mid] > target)
    {
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
};
int findlasttOccurance(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] == target)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (vec[mid] < target)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
};
int main()
{
  int target = 17;
  vector<int> vec = {2, 2, 4, 4, 8, 8, 12, 12, 12, 16};
  int ans = findfirstOccurance(vec, target);
  int ans1 = findlasttOccurance(vec, target);
  cout << "first occurance is : " << ans << endl;
  cout << "last occurance is : " << ans1 << endl;
  if (ans == -1 || ans1 == -1)
  {
    cout << "number of occurance is : " << 0 << endl;
  }
  else
  {
    cout << "number of occurance is : " << ans1 - ans + 1 << endl;
  }
  return 0;
}