#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, m;
  string x, s;
  cin >> n >> m >> x >> s;
  if (x.find(s) != string::npos) {
    cout << "0" << endl;
    return;
  }
  int ans = 0, len = 2 * max(n, m), ret = -1;
  while (x.size() < len) {
    x += x;
    ans++;
    if (x.find(s) != string::npos) {
      ret = ans;
      break;
    }
  }
  cout << ret << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}
