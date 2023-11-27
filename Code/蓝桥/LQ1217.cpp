#include <bits/stdc++.h>
#include <cstdio>
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  double l = 0, r = 1e6;
  double res = 0;
  while (l < r) {
    double m = l + (r - l) / 2.0;
    double ans = m * m * m;
    if (fabs(ans - n) <= 1e-12) {
      res = m;
      break;
    }
    if (ans < n) {
      r = m - 0.0001;
    } else if (ans > n) {
      l = m + 0.0001;
    }
  }
  printf("%.3f\n", res);
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}