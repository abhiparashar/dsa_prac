#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vec(5);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  // insert key
  cout << "Enter key";
  int elem;
  cin >> elem;
  int pairs = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    for (int j = i + 1; j < vec.size(); j++)
    {
      if (elem == vec[i] + vec[j])
      {
        pairs++;
      }
    }
  }
  cout << endl;
  cout << pairs << endl;
  return 0;
}