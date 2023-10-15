#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Item {
  int g, p;
  float f;
  Item() {}
  bool operator>(Item const &i) { return f > i.f; }
};

void solve() {
  int w, n;
  cin >> n >> w;
  vector<Item> v(n);
  vector<vector<int>> dp(n + 1, vector<int>(w + 1, 0));
  for (int i = 0; i < n; ++i) {
    cin >> v[i].g >> v[i].p;
    v[i].f = float(v[i].p) / float(v[i].g);
  }
  sort(v.begin(), v.end(), [](Item a, Item b) { return a > b; });
  float ans = 0;
  for (int i = 0; i < n; ++i) {
    if (v[i].g <= w) {
      ans += v[i].p;
    } else {
      ans += v[i].f * w;
    }
    w -= v[i].g;
    if (w <= 0)
      break;
  }
  printf("%.1f", ans);
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  solve();
}