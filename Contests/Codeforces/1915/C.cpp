#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(ll x) {
  ll l = 1, r = 1e9;
  while (l <= r) {
    ll mid = (l + r) >> 1;
    if (mid * mid == x)
      return true;
    if (mid * mid > x)
      r = mid - 1;
    else
      l = mid + 1;
  }
  return false;
}

void solve() {
  ll n, sum = 0;
  cin >> n;
  for (ll i = 0, x; i < n; ++i)
    cin >> x, sum += x;
  cout << (check(sum) ? "YES" : "NO") << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
