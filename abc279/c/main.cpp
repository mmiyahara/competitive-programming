#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> sh(h), th(h);
  for (auto &shi : sh)
  {
    cin >> shi;
  }
  for (auto &thi : th)
  {
    cin >> thi;
  }

  vector<string> sv(w), tv(w);
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j < h; j++)
    {
      sv[i].push_back(sh[j][i]);
      tv[i].push_back(th[j][i]);
    }
  }

  sort(sv.begin(), sv.end());
  sort(tv.begin(), tv.end());

  if (sv == tv)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}
