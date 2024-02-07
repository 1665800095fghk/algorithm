#include "bits/stdc++.h"
#include <algorithm>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &it : v)
    cin >> it;
  map<int, int> m;
  for (auto it : v)
    m[it]++;
  for (auto it : m) {
    if (it.second == 1) {
      cout << find(v.begin(), v.end(), it.first) - v.begin() + 1 << endl;
      return;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
