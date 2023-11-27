#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  unordered_map<int, int> m;
  int l = 0, ans = 0;
  for (int r = 0; r < n; ++r) {
    m[v[r]]++;
    while (m[v[r]] > 1) {
      m[v[l++]]--;
    }
    ans = ans > r - l + 1 ? ans : r - l + 1;
  }
  cout << ans << endl;
}