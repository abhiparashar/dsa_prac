#include <iostream>
#include <vector>
using namespace std;
bool isPairexist(vector<int> vec, int target)
{
  int i = 0;
  int j = vec.size();
  while (i < j)
  {
    if (vec[i] + vec[j] == target)
    {
      return true;
      break;
    }
    else if (vec[i] + vec[j] > target)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
  return false;
};
int main()
{
  vector<int> vec(4);
  int target = 2;
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  bool ans = isPairexist(vec, target);
  cout << ans << endl;
  return 0;
}