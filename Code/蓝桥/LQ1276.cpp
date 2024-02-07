#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<int> v(n);
  vector<int> m(n);
  for (int i = 1; i < n; ++i) {
    cin >> v[i];
    m[i] = v[i] - v[i - 1];
  }
  while (q--) {
    int l, r, x;
    cin >> l >> r >> x;
    for (int i = l - 1; i <= r - 1; i++) {
      v[i] += x;
    }
  }
  for (auto it : v)
    cout << (it < 0 ? 0 : it) << " ";
  cout << endl;
}
