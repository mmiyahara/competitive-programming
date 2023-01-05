#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s.at(i);
  }

  int counter{};
  while (!s.empty())
  {
    string s_base{s.back()};

    for (int i = 0; i < (s.size() - 1); i++)
    {
      string s_i{s.at(i)};
      bool flag{false};
      for (int j = 0; j < m; j++)
      {
        if (s_base.at(j) == 'o' || s_i.at(j) == 'o')
        {
          if (j == (m - 1))
            // If either one of the pair can solve the problem
            counter++;
          else
            continue;
        }
        else
          break;
      }
    }

    s.pop_back();
  }

  cout << counter << '\n';

  return 0;
}
