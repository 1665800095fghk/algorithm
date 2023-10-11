#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, k, ans = 0;
  string str;
  cin >> n >> k >> str;
  if (str.size() != n)
    return;
  for (int i = 0; i < n; ++i) {
    if (str[i] == 'B') {
      i += k - 1;
      ans++;
    }
  }
  cout << ans << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}