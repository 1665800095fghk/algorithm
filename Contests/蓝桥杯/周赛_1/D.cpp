#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Day {
  int k, s, d;
  Day() {}
  bool operator>(Day const &da) {
    if (s / d > da.s / da.d)
      return true;
    return false;
  }
};

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, m, q;
  cin >> n >> m >> q;
  vector<Day> v(m);
  vector<int> tmp(q), t(q + 1);
  for (int i = 0; i < q; ++i) {
    cin >> tmp[i];
    t[i] = tmp[i - 1] > 0 ? tmp[i] - tmp[i - 1] - 1 : tmp[i] - 0 - 1;
  }
  t[q] = n - tmp[q - 1];
  sort(t.begin(), t.end());
  // for (auto it : t) {
  //   cout << it << " ";
  // }
  for (int i = 0; i < m; ++i) {
    cin >> v[i].k >> v[i].s;
    v[i].d = 2 << v[i].k;
  }
  
}