#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int q;
  cin >> q;
  vector<int> v(q);
  for (int i = 0; i < q; i++)
  {
    cin >> v[i];
  }
  const int N = 1e5 + 10;
  vector<int> freq(N, 0);
  for (int i = 0; i < q; i++)
  {
    freq[v[i]]++;
  }
  int n;
  cin >> n;
  while (n--)
  {
    int queryElem;
    cin >> queryElem;
    cout << freq[queryElem] << endl;
  }
  return 0;
}