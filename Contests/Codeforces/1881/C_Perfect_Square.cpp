#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  int m = n / 2;
  int res = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = i; j < n - 1 - i; ++j) {
      vector<char> a = {v[i][j], v[j][n - 1 - i], v[n - 1 - i][n - 1 - j],
                        v[n - 1 - j][i]};
      char mx = a[0];
      for (int k = 1; k < 4; ++k)
        mx = max(mx, a[k]);
      for (int k = 0; k < 4; ++k)
        res += mx - a[k];
    }
  }
  cout << res << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}