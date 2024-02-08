#include <iostream>
using namespace std;
void findFirstAndLastIndex(string str, char ch, int *pf, int *pl)
{
  for (int i = 0; i < str.size(); i++)
  {
    if (str[i] == ch)
    {
      *pf = i;
      break;
    }
  }
  for (int i = str.size(); i >= 0; i++)
  {
    if (str[i] == ch)
    {
      *pl = i;
      break;
    }
  }
};
int main()
{
  string str = "aaabcac";
  char ch = 'a';
  int first = -1;
  int last = -1;
  int *pf = &first;
  int *pl = &last;
  findFirstAndLastIndex(str, ch, pf, pl);
  cout << (*pf) << " " << (*pl) << endl;
  cout << first << " " << last << endl;
  return 0;
}