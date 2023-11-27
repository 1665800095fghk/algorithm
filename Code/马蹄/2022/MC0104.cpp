#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.begin(), v.end());
  vector<int> res;
  int l = 0, r = n - 1;
  while (l <= r) {
    res.push_back(v[l++]);
    if (l <= r)
      res.push_back(v[r--]);
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++)
    ans += abs(res[i] - res[i + 1]);
  ans += abs(res[n - 1] - res[0]);
  cout << ans << endl;
}