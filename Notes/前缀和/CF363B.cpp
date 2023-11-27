#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, k, x, ans = 0;
  cin >> n >> k;
  vector<int> v(n), sum(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
    if (i == 0)
      sum[i] = v[i];
    else
      sum[i] = sum[i - 1] + v[i];
  }
  ll min = 1e16;
  for (int i = 0; i < n - k + 1; ++i) {
    if (i == 0)
      x = sum[i + k - 1];
    else
      x = sum[i + k - 1] - sum[i - 1];
    if (x < 0)
      x *= -1;
    if (x < min) {
      min = x;
      ans = (ll)i;
    }
  }
  cout << ans + 1 << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  solve();
}