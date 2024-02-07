#include "bits/stdc++.h"
#include <queue>
#include <utility>
#include <vector>

using namespace std;

const int N = 1e2 + 7;
vector<vector<int>> g, d;
int n, m;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int bfs() {
  queue<pair<int, int>> q;

  for (auto &v : d)
    for (auto &x : v)
      x = -1;

  d[0][0] = 0;
  q.push({0, 0});

  while (!q.empty()) {
    auto t = q.front();
    q.pop();
    for (int i = 0; i < 4; ++i) {
      int x = t.first + dx[i], y = t.second + dy[i];
      if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1) {
        d[x][y] = d[t.first][t.second] + 1;
        q.push({x, y});
      }
    }
  }
  return d[n - 1][m - 1];
}

int main() {
  cin >> n >> m;
  g.resize(n, vector<int>(m));
  d.resize(n, vector<int>(m));
  for (auto &row : g)
    for (auto &it : row)
      cin >> it;
  cout << bfs() << endl;
  return 0;
}
