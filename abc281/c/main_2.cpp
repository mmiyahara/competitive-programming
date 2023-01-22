#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int64_t t;
  cin >> n >> t;

  vector<int> a(n);
  // Store the address of a's each element in ai
  // and save standard input in a's each element
  for (auto &ai : a)
  {
    cin >> ai;
  }

  int64_t remainder = t % accumulate(begin(a), end(a), 0ll);
  int64_t sum = 0;

  for (int i = 0; i < n; i++)
  {
    if (sum + a[i] > remainder)
    {
      cout << i + 1 << ' ' << remainder - sum << endl;
      return 0;
    }
    sum += a[i];
  }

  return 0;
}
