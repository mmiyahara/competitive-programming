#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  ll a, b;
  cin >> a >> b;

  // 操作を n 回行うとすると
  // かかる時間は a/((1+n)^(1/2)) + bn
  auto f = [&](ll n) -> double
  {
    return (double)a / sqrt(1 + n) + (double)b * n;
  };

  // f(n) は下に凸で極値を取るはずなので三分探索で最小値を調べる
  // n >= (a/b) の場合 f(n) >= bn >= a = f(0) なので n < a/b の場合のみ考えれば OK
  ll l = 0, r = a / b;
  while (r - l > 2)
  {
    ll new_l = (l * 2 + r) / 3;
    ll new_r = (l + r * 2) / 3;

    if (f(new_l) > f(new_r))
      l = new_l;
    else
      r = new_r;
  }

  // l 〜 r の範囲で最小値を調べる （ただし n >= (a/b) の場合に注意）
  double ans = a;
  for (ll i = l; i <= r; i++)
  {
    ans = min(ans, f(i));
  }

  cout << fixed << setprecision(10) << ans << endl;

  return 0;
}
