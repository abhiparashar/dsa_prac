#include <iostream>
#include <vector>
using namespace std;
void sortZeoAndOnes(vector<int> &vec)
{
  int leftPtr = 0;
  int rightPtr = vec.size() - 1;
  while (leftPtr < rightPtr)
  {
    if (vec[leftPtr] == 1 && vec[rightPtr] == 0)
    {
      swap(vec[leftPtr], vec[rightPtr]);
      leftPtr++;
      rightPtr--;
    }
    if (vec[leftPtr] == 0)
    {
      leftPtr++;
    }
    if (vec[rightPtr] == 1)
    {
      rightPtr--;
    }
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
  sortZeoAndOnes(vec);
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  return 0;
}