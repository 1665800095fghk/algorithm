#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

void solve() {
  int n;
  string str, res = "";
  cin >> n;
  cin >> str;
  while (!str.empty()) {
    int x;
    if (str.back() == 'a' || str.back() == 'e')
      x = 2;
    else
      x = 3;

    while (x--) {
      res += str.back();
      str.pop_back();
    }
    res += '.';
  }
  res.pop_back();
  reverse(res.begin(), res.end());
  cout << res << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
