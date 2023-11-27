#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  string s;
  cin >> s;
  vector<int> v;
  for (auto it : s) {
    v.push_back(it == '0' ? 10 : it - '0');
  }
  int ans = 0;
  int cur = 1;
  for (auto it : v) {
    ans += abs(it - cur) + 1;
    cur = it;
  }
  cout << ans << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) solve();
}