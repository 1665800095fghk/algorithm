#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  if (v[0] != n) {
    cout << "NO\n";
    return;
  }
  vector<int> b;
  for (int i = n; i >= 1; i--) {
    while (b.size() < v[i]) {
      b.push_back(i);
    }
  }
  for(auto it : b) {
    cout << it << " ";
  }

  // vector<int> m(n, 0);
  // for (int i = 0; i < n; ++i) {
  //   for (int j = 0; j < v[i]; j++) {
  //     m[j]++;
  //   }
  // }
  // bool flag = true;
  // for (int i = 0; i < n; ++i) {
  //   if (v[i] != m[i]) {
  //     flag = false;
  //     break;
  //   }
  // }
  // if (flag)
  //   cout << "YES\n";
  // else
  //   cout << "NO\n";
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}