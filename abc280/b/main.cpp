#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> s(n);
  for (auto &si : s)
  {
    cin >> si;
  }

  for (int i = 0; i < s.size(); i++)
  {
    if (i == 0)
      cout << s[i];
    else
      cout << ' ' << s[i] - s[i - 1];
  }

  cout << endl;

  return 0;
}
