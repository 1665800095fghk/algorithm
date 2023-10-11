#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
      cin >> v[i];
    sort(v.begin(), v.end());
    v[0]++;
    int ans = 1;
    for (auto it : v)
      ans *= it;
    cout << ans << endl;
  }
}