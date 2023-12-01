#include "bits/stdc++.h"
#include <vector>

using namespace std;

int n, m;
vector<string> v;
vector<vector<bool>> st;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int res = 1; // 起点

void dfs(int x, int y) {
  for (int i = 0; i < 4; ++i) {
    int a = x + dx[i];
    int b = y + dy[i];

    if (a < 0 || a >= m || b < 0 || b >= n)
      continue;
    if (v[a][b] != '.')
      continue;
    if (st[a][b])
      continue;

    st[a][b] = true;
    res++;
    dfs(a, b);
  }
}

int main() {
  cin >> n >> m;
  v.resize(m);
  st.resize(m, vector<bool>(n));
  for (auto &it : v)
    cin >> it;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (v[i][j] == '@') {
        dfs(i, j);
      }
    }
  }
  cout << res;
}
