#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n;
  ll x;
  cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  ll l = 0, r = 1e10;
  while (l < r) {
    ll mid = l + (r - l + 1) / 2;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
      ans += max(mid - v[i], 0LL);
    if (ans <= x)
      l = mid;
    else
      r = mid - 1;
  }
  cout << l << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}