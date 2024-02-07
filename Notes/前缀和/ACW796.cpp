#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, q;
  cin >> n >> m >> q;
  vector<vector<int>> v(n + 1, vector<int>(m + 1));
  vector<vector<int>> p(n + 1, vector<int>(m + 1));
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
      cin >> v[i][j];
  for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
      p[i][j] = v[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
  while (q--) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << p[x2][y2] - p[x1 - 1][y2] - p[x2][y1 - 1] + p[x1 - 1][y1 - 1]
         << endl;
  }
}
