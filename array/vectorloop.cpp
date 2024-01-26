#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> v;
  // for loop
  for (int i = 0; i < 5; i++)
  {
    int elem;
    cin >> elem;
    v.push_back(elem);
  }

  // for loop output
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  v.insert(v.begin() + 2, 6);
  // foreach
  for (int elem : v)
  {
    cout << elem << " ";
  }
  cout << endl;
  v.erase(v.end() - 2);
  // while loop
  int idx = 0;
  while (idx < v.size())
  {
    cout << v[idx++] << " ";
  }
  cout << endl;

  return 0;
}
