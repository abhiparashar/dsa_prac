#include <iostream>
using namespace std;
int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);
  int evenCount = 0;
  int oddCount = 0;
  for (int i = 0; i < size; i++)
  {
    if (arr[i] % 2 == 0)
    {
      evenCount++;
    }
    else
    {
      oddCount++;
    }
  }
  cout << "Odd Numbers " << oddCount << endl;
  cout << "Even Numbers " << evenCount;
  return 0;
}