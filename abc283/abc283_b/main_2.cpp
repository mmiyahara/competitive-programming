#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a.at(i);
  }

  int q;
  cin >> q;

  while (q--)
  {
    int q_e_1;
    int q_e_2;
    int q_e_3;
    cin >> q_e_1 >> q_e_2;

    if (q_e_1 == 1)
    {
      cin >> q_e_3;
      a.at(q_e_2 - 1) = q_e_3;
    }

    if (q_e_1 == 2)
    {
      cout << a.at(q_e_2 - 1) << '\n';
    }
  }

  return 0;
}
