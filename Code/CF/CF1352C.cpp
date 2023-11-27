#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  int need = (k - 1) / (n - 1);
  cout << k + need << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}