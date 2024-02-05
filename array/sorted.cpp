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

  bool ans = false;

  for (int i = 1; i < v.size() - 1; i++)
  {
    if (v[i - 1] < v[i])
    {
      ans = true;
      break;
    }
  }

  cout << endl;
  cout << (ans ? "yes" : "no") << endl;
  return 0;
}
