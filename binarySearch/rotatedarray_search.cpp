#include <iostream>
#include <vector>
using namespace std;
int findMinInRotatedArray(vector<int> &vec)
{
  int start = 0;
  int end = vec.size() - 1;
  // sorted array
  if (vec[start] < vec[end])
  {
    return vec[start];
  }
  // if rotated sorted array
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] > vec[mid + 1])
      return mid + 1;
    if (vec[mid] < vec[mid + 1])
    {
      return mid;
    }
    if (vec[mid] > vec[start])
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
};
int main()
{
  // 3, 4, 5, 1, 2
  // 1,2,3,4,5
  // 7,2,3,4,5,6
  vector<int> vec = {7, 2, 3, 4, 5, 6};
  int ans = findMinInRotatedArray(vec);
  cout << ans;
  return 0;
}