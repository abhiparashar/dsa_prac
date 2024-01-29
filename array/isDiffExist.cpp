#include <iostream>
#include <vector>
using namespace std;
bool isDiffExist(vector<int> &vec, int target)
{
  int i = 0;
  int j = vec.size();
  while (i < j)
  {
    if (vec[j] - vec[i] == target)
    {
      return true;
    }
    else if (vec[j] - vec[i] > target)
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
  vector<int> vec(5);
  int target = 10;
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  bool ans = isDiffExist(vec, target);
  cout << ans << endl;
  return 0;
}