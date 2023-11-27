#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char, int> m;
  for (auto it : s) m[it] = m[it] >= 0 ? m[it] + 1 : 1;
  int odd = 0;
  for (auto it : m)
    if (it.second % 2 != 0) odd++;
  if (odd > k + 1) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}