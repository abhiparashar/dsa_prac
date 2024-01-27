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
  cout << "Insert your elem";
  int elem;
  cin >> elem;
  int count = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > elem)
    {
      count++;
    }
  }
  cout << endl;
  cout << count << endl;
  return 0;
}