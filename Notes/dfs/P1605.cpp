#include "bits/stdc++.h"
#include <string>
#include <vector>
using namespace std;

int n, m;
int sx, sy, ex, ey;
vector<vector<char>> v;
vector<vector<bool>> st;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int res = 0;

void dfs(int x, int y) {
  if (x == ex && y == ey) {
    res++;
    return;
  } else {
    for (int i = 0; i < 4; ++i) {
      int a = x + dx[i];
      int b = y + dy[i];

      if (a < 1 || a > n || b < 1 || b > m)
        continue;
      if (v[a][b] == '#')
        continue;
      if (st[a][b])
        continue;

      st[a][b] = true;
      dfs(a, b);
      st[a][b] = false;
    }
  }
}

int main() {
  int t;
  cin >> n >> m >> t;
  cin >> sx >> sy >> ex >> ey;
  v.resize(n + 1, vector<char>(m + 1, ' '));
  st.resize(n + 1, vector<bool>(m + 1, false));
  // ！必须设置起始点为已访问
  st[sx][sy] = true;
  while (t--) {
    int x, y;
    cin >> x >> y;
    v[x][y] = '#';
  }
  dfs(sx, sy);
  cout << res;
}
