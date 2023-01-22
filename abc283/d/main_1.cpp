#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();

  // (...) の中身を保存
  vector<vector<char>> v(n);

  // 各アルファベットを使ったかどうか
  vector<bool> used(256);

  // () の階層数を保存
  int now{0};

  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(')
      now++;
    else if (s[i] == ')')
    {
      for (char c : v[now])
      {
        used[c] = false;
      }
      v[now].clear();
      now--;
    }
    else
    {
      if (used[s[i]])
      {
        cout << "No" << endl;
        return 0;
      }
      v[now].push_back(s[i]);
      used[s[i]] = true;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
