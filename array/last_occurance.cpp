#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v(6);
  for (int i = 0; i < v.size(); i++)
  {
    cin >> v[i];
  }
  cout << "Insert the elem";
  int elem;
  cin >> elem;
  int occurance = -1;
  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (v[i] == elem)
    {
      occurance = i;
      break;
    }
  }
  cout << endl;
  cout << occurance << " is the last occurance";
  return 0;
}