#include <algorithm>
#include <bits/stdc++.h>
#include <functional>
#define ll long long
using namespace std;

struct person {
  int s, e;
  bool operator>=(person &p) { return s >= p.s && e >= p.e; }
};

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t, n;
  cin >> t;
  while (t--) {
    bool flag = true;
    cin >> n;
    vector<person> v(n);
    for (int i = 0; i < n; ++i)
      cin >> v[i].s >> v[i].e;
    for (int i = 1; i < n; ++i) {
      if (v[i] >= v[0]) {
        flag = false;
      }
    }
    if (!flag)
      cout << "-1" << endl;
    else
      cout << v[0].s << endl;
  }
}