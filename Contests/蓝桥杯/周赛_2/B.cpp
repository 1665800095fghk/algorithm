#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  if (n < 2 || m < 2) {
    cout << "No\n";
    return;
  }
  if (n * m % 6 == 0) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}