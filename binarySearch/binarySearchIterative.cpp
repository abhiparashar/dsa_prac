#include <iostream>
#include <vector>
using namespace std;
// iterative approach
bool binarySearchIterative(vector<int> &vec, int target)
{
  int start = 0;
  int end = vec.size() - 1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (vec[mid] == target)
    {
      return true;
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
  return false;
};
int main()
{
  int target = 19;
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  bool ans = binarySearchIterative(vec, target);
  if (ans)
  {
    cout << "found";
  }
  else
  {
    cout << "not found";
  }
  return 0;
}