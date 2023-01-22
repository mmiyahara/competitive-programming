#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  // 各階から行ける階を連想配列に格納
  map<int, vector<int>> graph;
  for (int i = 0; i < N; i++)
  {
    int A, B;
    cin >> A >> B;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  // 行ける階の集合
  set<int> S;
  S.insert(1);

  // 次に調べる階をキューに保存
  queue<int> que;
  que.push(1);

  while (!que.empty())
  {
    int v = que.front();
    que.pop();
    // que に格納された階から行ける階が node に入る
    for (int node : graph[v])
    {
      if (S.count(node) == 0)
      {
        S.insert(node);
        que.push(node);
      }
    }
  }

  cout << *S.rbegin() << endl;

  return 0;
}
