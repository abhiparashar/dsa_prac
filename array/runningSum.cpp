#include <iostream>
#include <vector>
using namespace std;
void runningSum(vector<int> &vec)
{
  for (int i = 1; i < vec.size(); i++)
  {
    vec[i] += vec[i - 1];
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
  runningSum(vec);
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }

  return 0;
}