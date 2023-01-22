#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();

  bool flag{true};

  // 各アルファベットが使われているかどうか
  bool used[26]{false};

  // 各アルファベットが使われたインデックスを保存
  int pos[26]{0};

  // ( のインデックスを保存するスタック
  stack<int> st;

  for (int i = 0; i < n; i++)
  {
    if (s[i] == '(')
    {
      // スタックに ( のインデックスを追加
      st.push(i);
    }
    else if (s[i] == ')')
    {
      for (int j = 0; j < 26; j++)
      {
        // ( よりも後にあるアルファベットを未使用にする
        if (pos[j] > st.top())
          used[j] = false;
      }
      st.pop();
    }
    else
    {
      if (used[s[i] - 'a'])
      {
        flag = false;
        break;
      }
      else
      {
        used[s[i] - 'a'] = true;
        pos[s[i] - 'a'] = i;
      }
    }
  }

  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}
