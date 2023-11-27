#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; ++i) cin >> v[i];
  int min = k;
  for (auto it : v)
    if (k - it >= 0 && k - it < min) min = k - it;
  // for (auto it : ans) cout << it << " ";
  // cout << endl;
  cout << min << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}