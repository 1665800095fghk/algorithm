#include "bits/stdc++.h"

using namespace std;

int n, m;
vector<int> res;
vector<bool> st;

void dfs(int x, int startx) {
  if (x > m) {
    for (int i = 1; i <= m; ++i)
      cout << res[i] << " ";
    cout << endl;
    return;
  }
  for (int i = startx; i <= n; ++i) {
    if (!st[i]) {
      st[x] = true;
      res[x] = i;
      dfs(x + 1, i + 1);
      st[x] = false;
    }
  }
}

int main() {
  cin >> n >> m;
  res.resize(m + 1);
  st.resize(n + 1, false);
  dfs(1, 1);
}
