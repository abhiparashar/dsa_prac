#include <iostream>
#include <vector>
using namespace std;
void sortZeroOne(vector<int> &vec, int size)
{
  int count = 0;
  for (int i = 0; i < size; i++)
  {
    if (vec[i] == 0)
    {
      count++;
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (i < count)
    {
      vec[i] = 0;
    }
    else
    {
      vec[i] = 1;
    }
  }
};
int main()
{
  int n;
  cin >> n;
  vector<int> vec(n);
  for (int i = 0; i < n; i++)
  {
    cin >> vec[i];
  }
  sortZeroOne(vec, n);
  for (int i = 0; i < n; i++)
  {
    cout << vec[i] << " ";
  }

  return 0;
}