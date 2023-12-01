#include "bits/stdc++.h"
#include <vector>

using namespace std;

int n, m;
map<int, vector<int>> v;
vector<bool> st;
bool flag = false;

void dfs(int x) {
  if (x == n || flag) {
    flag = true;
    return;
  }
  for (auto it : v[x]) {
    if (!st[it]) {
      st[it] = true;
      dfs(it);
      if (flag)
        return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
  cin >> n >> m;
  st.resize(n + 1);
  for (int i = 0; i < m; ++i) {
    int cur, to;
    cin >> cur >> to;
    v[cur].push_back(to);
  }
  st[1] = true;
  dfs(1);
  cout << (flag ? "Yes" : "No");
}
