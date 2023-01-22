#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int64_t> A(N);
  for (auto &a : A)
    cin >> a;

  int Q;
  cin >> Q;

  int base{};
  // A のインデックス番号と増分を表す
  map<int64_t, int64_t> m;
  for (int64_t i = 0; i < N; i++)
    m[i] = A[i];

  while (Q--)
  {
    int mode, i, x;
    cin >> mode;
    if (mode == 1)
    {
      cin >> base;
      m.clear();
    }
    else if (mode == 2)
    {
      cin >> i >> x;
      m[i - 1] += x;
    }
    else if (mode == 3)
    {
      cin >> i;
      cout << base + m[i - 1] << endl;
    }
  }

  return 0;
}
