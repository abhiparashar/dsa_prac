#include <iostream>
#include <vector>
using namespace std;
void moveEvenFirst(vector<int> &vec)
{
  int leftPtr = 0;
  int rightPtr = vec.size() - 1;
  while (leftPtr < rightPtr)
  {
    if (vec[leftPtr] % 2 == 1 && vec[rightPtr] % 2 == 0)
    {
      swap(vec[leftPtr], vec[rightPtr]);
      leftPtr++;
      rightPtr--;
    }
    if (vec[leftPtr] % 2 == 0)
    {
      leftPtr++;
    }
    if (vec[rightPtr] % 2 == 1)
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
  moveEvenFirst(vec);
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  return 0;
}