#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  bool inQuote{false};
  while (n--)
  {
    char s;
    cin >> s;

    if (s == '"')
      inQuote = !inQuote;

    (!inQuote && s == ',') ? cout << '.' : cout << s;
  }

  cout << '\n';

  return 0;
}
