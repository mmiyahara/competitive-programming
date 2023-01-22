#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int n = s.size();

  int counter{};
  for (char c : s)
  {
    if (c == 'v')
      counter += 1;
    else if (c == 'w')
      counter += 2;
  }

  cout << counter << endl;

  return 0;
}
