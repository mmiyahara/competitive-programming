#include <bits/stdc++.h>
using namespace std;

int outputNo()
{
  cout << "No" << endl;
  return 0;
}

int main()
{
  string s;
  cin >> s;
  string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string digit{"0123456789"};
  string num{"0"};

  if (s.size() != 8)
    return outputNo();

  for (int i = 0; i < s.size(); i++)
  {
    bool isAlphabet{false};
    bool isDigit{false};

    if (i == 0 || i == (s.size() - 1))
    {
      for (int j = 0; j < alphabet.size(); j++)
      {
        if (s[i] == alphabet[j])
          isAlphabet = true;
      }
    }
    else
    {
      num += s[i];
      for (int k = 0; k < digit.size(); k++)
      {
        if (s[i] == digit[k])
          isDigit = true;
      }
    }
    if (i == (s.size() - 2))
    {
      if (stoi(num) < 100000 || stoi(num) >= 1000000)
        return outputNo();
    }

    if (!isAlphabet && !isDigit)
      return outputNo();
  }

  cout << "Yes" << endl;

  return 0;
}
