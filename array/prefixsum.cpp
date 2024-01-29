#include <iostream>
#include <vector>
using namespace std;
void prefixSum(vector<int> vec, int size)
{
  vector<int> ans(size);
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + vec[i];
    ans[i] = sum;
  }
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
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
  prefixSum(vec, n);
  return 0;
}