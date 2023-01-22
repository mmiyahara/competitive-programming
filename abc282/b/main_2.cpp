#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }

  int counter{};
  for (int x = 0; x < n; x++)
  {
    for (int y = x + 1; y < n; y++)
    {
      bool canSolveProblem{true};
      for (int j = 0; j < m; j++)
      {
        if (s[x][j] == 'x' && s[y][j] == 'x')
          canSolveProblem = false;
      }
      if (canSolveProblem)
        counter++;
    }
  }

  cout << counter << '\n';

  return 0;
}
