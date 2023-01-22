#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  int64_t t;
  cin >> n >> t;

  vector<int> a(n);
  int64_t a_sum{};
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    a_sum += a[i];
  }

  // In order to reduce the computational complexity,
  // instead of comparing t and the length of each song,
  // compare the remainder of (t / the total length of songs) and the length of each song
  if (t > a_sum)
    t %= a_sum;

  int j{0};
  while (t >= 0)
  {
    int song_index{j % n};
    t -= a[song_index];
    if (t < 0)
      cout << song_index + 1 << ' ' << t + a[song_index] << endl;
    j++;
  }

  return 0;
}
