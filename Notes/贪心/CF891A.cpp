#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  int ans = 0;
  for (auto it : v)
    if (it % 2 == 1)
      ans++;
  if (ans % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}