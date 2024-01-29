#include <iostream>
#include <vector>
using namespace std;
bool prefixSuficSum(vector<int> &vec)
{
  int total_sum = 0;
  int prefix_sum = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    total_sum += vec[i];
  }
  // prefixsum calculation
  for (int i = 0; i < vec.size(); i++)
  {
    prefix_sum = prefix_sum + vec[i];
    int sufix_sum = total_sum - prefix_sum;
    if (prefix_sum == sufix_sum)
    {
      return true;
    }
  }
  return false;
};
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  bool ans = prefixSuficSum(vec);
  cout << ans << endl;
  return 0;
}