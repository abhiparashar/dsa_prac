#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vec(5);
  int k = 2;
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  reverse(vec.begin(), vec.end());
  reverse(vec.begin() + k, vec.end());
  reverse(vec.begin(), vec.begin() + k);
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  return 0;
}