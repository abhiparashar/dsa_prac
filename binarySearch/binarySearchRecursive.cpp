#include <iostream>
#include <vector>
using namespace std;
bool binarySearchRecursive(vector<int> &vec, int target, int start, int end)
{
  if (start > end)
  {
    return false;
  }
  int mid = start + (end - start) / 2;
  if (vec[mid] == target)
  {
    return true;
  }
  else if (vec[mid] < target)
  {
    return binarySearchRecursive(vec, target, mid + 1, end);
  }
  else
  {
    return binarySearchRecursive(vec, target, start, mid - 1);
  }
}
int main()
{
  int target = 100;
  int n;
  cin >> n;
  vector<int> vec(n);
  int start = 0;
  int end = vec.size() - 1;
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  bool ans = binarySearchRecursive(vec, target, start, end);
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