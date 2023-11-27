#include "bits/stdc++.h"
#include <iomanip>

using namespace std;

int n;
int vis[50];

void dfs(int x) {
  if (x > n) {
    for (int i = 1; i <= n; ++i)
      if (vis[i])
        cout << setw(5) << i;
    cout << endl;
    return;
  }
  // 不选择x
  vis[x] = 0;
  dfs(x + 1);
  vis[x] = 1;
  // 选择x
  dfs(x + 1);
  vis[x] = 0;
}

int main() {
  cin >> n;
  dfs(1);
}
