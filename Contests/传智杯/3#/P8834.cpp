#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, k, ans = 0;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      if (v[i] * v[j] <= k) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}