#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#define ll long long
using namespace std;

int c0(vector<int> v) { return v[0] == v[1] && v[1] == v[2]; }
int c1(vector<int> v) {
  return v[0] % 2 == 0 && v[0] / 2 == v[1] && v[1] == v[2];
}
int c2(vector<int> v) {
  return v[1] == v[0] && v[0] % 2 == 0 && v[0] / 2 == v[2] ||
         v[1] == v[2] && v[0] % 3 == 0 && v[0] / 3 == v[1];
}
int c3(vector<int> v) {
  return v[1] == v[2] && v[0] % 4 == 0 && v[0] / 4 == v[1] ||
         v[0] % 3 == 0 && v[0] / 3 == v[2] && v[1] % 2 == 0 && v[1] / 2 == v[2];
}

void solve() {
  vector<int> v(3);
  cin >> v[0] >> v[1] >> v[2];
  sort(v.begin(), v.end(), greater<int>());
  if (c0(v) || c1(v) || c2(v) || c3(v)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}