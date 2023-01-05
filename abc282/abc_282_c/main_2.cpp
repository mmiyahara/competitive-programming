// Instead of outputting chars one by one, save the result in a variable and output last.

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s;
  cin >> s;

  bool inQuote{false};
  for (int i = 0; i < n; i++)
  {
    if (s[i] == '"')
      inQuote = !inQuote;

    if (!inQuote && s[i] == ',')
      s[i] = '.';
  }

  cout << s << '\n';

  return 0;
}
