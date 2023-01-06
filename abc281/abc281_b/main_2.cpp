#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;

  int n = s.size();
  if (n != 8)
  {
    cout << "No" << endl;
    return 0;
  }

  string s1 = s.substr(0, 1);
  string s2 = s.substr(1, 6);
  string s3 = s.substr(7, 7);

  int n2;
  try
  {
    n2 = stoi(s2);
  }
  catch (const exception &e)
  {
    cout << "No" << endl;
    return 0;
  }

  bool flag{true};
  if (!("A" <= s1 && s1 <= "Z") || !(100000 <= n2 && n2 <= 1000000) || !("A" <= s3 && s3 <= "Z"))
    flag = false;

  cout << (flag ? "Yes" : "No") << endl;

  return 0;
}
