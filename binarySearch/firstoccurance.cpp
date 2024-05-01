#include <iostream>
#include <vector>
using namespace std;
int firstOccur(vector<int> &vec, int target)
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
}
int lastOccur(vector<int> &vec, int target)
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
pair<int, int> firstAndLastOccur(vector<int> &vec, int target)
{
  int firstOccurance = firstOccur(vec, target);
  int lastOccurance = lastOccur(vec, target);
  return make_pair(firstOccurance, lastOccurance);
};
int main()
{
  int target = 3;
  vector<int> vec = {1, 2, 3, 3, 3, 5, 11};
  pair<int, int> ans = firstAndLastOccur(vec, target);
  cout << "First Occurrence: " << ans.first << ", Last Occurrence: " << ans.second << endl;
  return 0;
}