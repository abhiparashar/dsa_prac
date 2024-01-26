#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vec(6);
  for (int i = 0; i < vec.size(); i++)
  {
    cin >> vec[i];
  }
  cout << "Enter the number";
  int elem;
  cin >> elem;
  int count = 0;
  for (int i = 0; i < vec.size(); i++)
  {
    if (elem == vec[i])
    {
      count++;
    }
  }
  cout << endl;
  cout << count;
  return 0;
}