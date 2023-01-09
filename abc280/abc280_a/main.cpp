#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;

  int counter{};
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      char c;
      cin >> c;
      if (c == '#')
        counter++;
    }
  }

  cout << counter << endl;

  return 0;
}
