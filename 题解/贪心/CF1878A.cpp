#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
      cin >> v[i];
    bool flag = false;
    for (auto it : v) {
      if (it == k) {
        flag = true;
      }
    }
    if (flag)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}