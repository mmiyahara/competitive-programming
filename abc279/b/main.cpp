#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  if (t.size() > s.size())
  {
    cout << "No" << endl;
    return 0;
  }

  vector<string> v(s.size() - t.size() + 1);

  // t と同じ文字数の文字列を s から全通り抽出
  for (int i = 0; i < s.size() - t.size() + 1; i++)
  {
    for (int j = 0; j < t.size(); j++)
      v[i].push_back(s[i + j]);
  }

  for (auto &st : v)
  {
    if (st == t)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}
