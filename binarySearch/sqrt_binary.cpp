#include <iostream>
using namespace std;
int findsqrt(int num)
{
  int start = 1;
  int end = num;
  int ans = -1;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    if (mid * mid <= num)
    {
      ans = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return ans;
}
int main()
{
  int num = 11;
  int ans = findsqrt(num);
  cout << ans;
  return 0;
}