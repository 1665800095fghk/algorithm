#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> v(n), d;
  for (auto &it : v)
    cin >> it;
  for (int i = 1; i < n; ++i)
    d.push_back(v[i] - v[i - 1]);
  int ans = 0;
  for (int i = 0; i < n - k; i++)
    ans += d[i];
  cout << ans << endl;
}