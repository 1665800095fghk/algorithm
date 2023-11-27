#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Edge {
  int u, v;
};

int n, m;
vector<Edge> e;
vector<bool> vis;

// 查询是否存在某条边
bool find_edge(int u, int v) {
  for (int i = 1; i <= m; ++i) {
    if (e[i].u == u && e[i].v == v) {
      return true;
    }
  }
  return false;
}

void dfs(int u) {
  if (vis[u])
    return;
  vis[u] = true;
  for (int i = 1; i <= m; ++i) {
    if (e[i].u == u) {
      dfs(e[i].v);
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> n >> m;
  vis.resize(n + 1, false);
  e.resize(m + 1);

  for (int i = 1; i <= m; ++i)
    cin >> e[i].u >> e[i].v;
}