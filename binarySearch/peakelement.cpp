#include <iostream>
#include <vector>
using namespace std;
int findPeakValue(vector<int> &vec)
{
  int low = 0;
  int high = vec.size() - 1;
  int ans = -1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (vec[mid - 1] < vec[mid])
    {
      // increasing curve
      ans = vec[mid];
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}
int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 3, 2, 0};
  int ans = findPeakValue(vec);
  cout << ans;
  return 0;
}