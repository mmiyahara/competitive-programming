#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
  int N;
  cin >> N;

  // N 個の vector を生成
  // vector[i][0] を a_i の 2 の乗数、
  // vector[i][1] を a_i の 3 の乗数を入れる
  vector<vector<int>> vec(N, vector<int>(2));
  set<int> s;
  rep(i, N)
  {
    int value;
    cin >> value;

    while (value % 2 == 0)
    {
      value /= 2;
      vec[i][0] += 1;
    }

    while (value % 3 == 0)
    {
      value /= 3;
      vec[i][1] += 1;
    }

    s.insert(value);
  }

  // 2 or 3 の倍数とそれ以外の数字がある場合
  // 例: 2 1 7 -> s には 1,7 が入る
  if (s.size() > 1)
  {
    cout << -1 << endl;
    return 0;
  }

  // 2、3 の乗数の最小値を取得
  int two_min = 0;
  int three_min = 0;
  rep(i, N)
  {
    if (i == 0)
    {
      two_min = vec[i][0];
      three_min = vec[i][1];
    }
    else
    {
      two_min = min(two_min, vec[i][0]);
      three_min = min(three_min, vec[i][1]);
    }
  }

  // (a_i の 2 の乗数 - A のうち最小の 2 の乗数) と
  // (a_i の 3 の乗数 - A のうち最小の 3 の乗数) の和が答え
  int ans = 0;
  rep(i, N)
  {
    ans += vec[i][0] - two_min;
    ans += vec[i][1] - three_min;
  }

  cout << ans << endl;

  return 0;
}
