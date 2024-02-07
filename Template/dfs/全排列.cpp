#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int n;
int num[50], vis[50];

void dfs(int x) {
  if (x > n) {
    for (int i = 1; i <= n; ++i)
      cout << setw(5) << num[i];
    cout << endl;
    return;
  }

  for (int i = 1; i <= n; ++i) {
    if (vis[i] == 0) {
      vis[i] = 1;
      num[x] = i;
      dfs(x + 1);
      vis[i] = 0;
    }
  }
}

int main() {
  cin >> n;
  dfs(1);
}
