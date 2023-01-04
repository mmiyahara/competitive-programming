#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  int counter{0};

  for (int i = 0; i < s.length(); i++)
  {
    char prev{s[i]};
    char current{s[i + 1]};
    if (prev == '0' && current == '0')
    {
      i++;
    }
    counter++;
  }

  cout << counter << '\n';

  return 0;
}
