#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int a, m, n, k, t1, t2;
  cin >> a >> m >> n >> k >> t1 >> t2;
  vector<pair<int, int>> v(a);
  for (auto &it : v)
    cin >> it.first >> it.second;
  int ans = 0, time = v[0].first;
  for (int i = 0; i < a - 1; ++i) {
    ans += m * (v[i].second - v[i].first);
    time += v[i].second - v[i].first;

    if (time + t1 > v[i + 1].first) {
      ans += m * (v[i + 1].first - time);
      time += (v[i + 1].first - time);
    } else {
      ans += m * t1;
      time += t1;
    }

    if (time + t2 > v[i + 1].first) {
      ans += n * (v[i + 1].first - time);
      time += (v[i + 1].first - time);
    } else {
      ans += t2 * n;
      time += t2;
    }

    ans += (v[i + 1].first - time) * k;
    time += v[i + 1].first - time;
  }
  ans += m * (v[a - 1].second - v[a - 1].first);

  cout << ans << endl;
}