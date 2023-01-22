#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int base{};
  // base からの差分を管理する配列
  vector<int64_t> A(N);
  for (auto &a : A)
    cin >> a;

  // 差分が 0 ではないインデックス番号を格納する配列
  vector<int> added_index(N);
  for (int i = 0; i < N; i++)
    added_index[i] = i;

  int Q;
  cin >> Q;

  while (Q--)
  {
    int mode, iq, xq;
    cin >> mode;

    if (mode == 1)
    {
      while (!empty(added_index))
      {
        A[added_index.back()] = 0;
        added_index.pop_back();
      }
      cin >> base;
    }
    else if (mode == 2)
    {
      cin >> iq >> xq;
      A[iq - 1] += xq;
      added_index.push_back(iq - 1);
    }
    else if (mode == 3)
    {
      cin >> iq;
      cout << A[iq - 1] + base << endl;
    }
  }

  return 0;
}
