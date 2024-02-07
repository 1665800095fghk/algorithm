#include "bits/stdc++.h"
#include <map>
#include <vector>

using namespace std;

int n, m;
map<int, vector<int>> g;
vector<bool> st;
bool flag = false;

void dfs(int x) {
  if (flag || x == n) {
    flag = true;
    return;
  }
  for (auto it : g[x]) {
    if (!st[it]) {
      st[it] = true;
      dfs(it);
    }
  }
}

int main() {
  cin >> n >> m;
  st.resize(n + 1);
  while (m--) {
    int cur, to;
    cin >> cur >> to;
    g[cur].push_back(to);
  }
  dfs(1);
  cout << (flag ? "Yes" : "No") << endl;
}
