#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int counter{};
  while (!empty(s))
  {
    char first_digit = s.back();
    s.pop_back();
    char second_digit = s.back();
    if (first_digit == '0' && second_digit == '0')
    {
      s.pop_back();
    }
    counter++;
  }

  cout << counter << '\n';

  return 0;
}
