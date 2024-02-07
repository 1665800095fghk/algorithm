#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  string s, f;
  cin >> s >> f;
  int c_s = 0, c_f = 0;
  int res = 0;
  for (int i = 0; i < n; ++i) {
    if (s[i] == '0' && f[i] == '1')
      c_s++;
    if (s[i] == '1' && f[i] == '0')
      c_f++;
  }
  cout << max(c_s, c_f) << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
