#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

struct Edge {
  int next; // 下条边的编号
  int to;   // 下条边的终点
  int w;    // 这条边的权值
};

int n, m;
vector<int> head; // 节点，存储指向边的下标
vector<Edge> e;   // 边，指向下一个同属一个节点的边
vector<bool> vis; // dfs 需要
int tot = 0;

void add(int u, int v, int w) {
  ++tot;
  e[tot].next = head[u];
  e[tot].w = w;
  e[tot].to = v;
  head[u] = tot;
}

bool find_edge(int u, int v) {
  for (int j = head[u]; j != -1; j = e[j].next) {
    if (e[j].to == v) {
      return true;
    }
  }
  return false;
}

void dfs(int u) {
  cout << u << " ";
  vis[u] = true;
  for (int i = head[u]; i != -1; i = e[i].next) {
    if (!vis[e[i].to]) {
      dfs(e[i].to);
    }
  }
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> n >> m;
  head.resize(n + 1, -1);
  vis.resize(m + 1, false);
  e.resize(m + 1);

  for (int i = 1; i <= m; ++i) {
    int u, v, w;
    cin >> u >> v >> w;
    add(u, v, w);
  }

  // for (int i = 1; i <= n; ++i) {
  //   for (int j = head[i]; j != -1; j = e[j].next) {
  //     cout << j << " ";
  //   }
  //   cout << endl;
  // }

  dfs(1);
}