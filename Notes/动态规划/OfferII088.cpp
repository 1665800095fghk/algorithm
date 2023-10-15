#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  vector<int> v = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
  vector<int> dp(1024);
  dp[0] = dp[1] = 0;
  for (int i = 2; i <= v.size(); ++i)
    dp[i] = min(dp[i - 1] + v[i - 1], dp[i - 2] + v[i - 2]);
  cout << dp[v.size()];

  // for (int i = 0; i < v.size(); ++i)
  //   cin >> v[i];
  // int cur = v[0] < v[1] ? 0 : 1;
  // int cost = v[cur];
  // while (cur < v.size()) {
  //   cur += v[cur + 1] < v[cur + 2] ? 1 : 2;
  //   cost += v[cur];
  // }
  // cout << cost << endl;
}