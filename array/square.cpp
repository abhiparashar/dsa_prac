#include <iostream>
#include <vector>
using namespace std;
void square(vector<int> &vec)
{
  int leftPtr = 0;
  int rightPtr = vec.size() - 1;
  vector<int> ans;
  while (leftPtr < rightPtr)
  {
    if (abs(vec[leftPtr]) < abs(vec[rightPtr]))
    {
      ans.push_back(vec[rightPtr] * vec[rightPtr]);
      rightPtr--;
    }
    else
    {
      ans.push_back(vec[leftPtr] * vec[leftPtr]);
      leftPtr++;
    }
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
  square(vec);
  return 0;
}