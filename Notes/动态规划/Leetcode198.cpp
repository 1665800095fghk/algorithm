#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  vector<int> v = {2, 7, 9, 3, 1};
  vector<int> dp(110);
  dp[0] = v[0];
  dp[1] = max(v[0], v[1]);
  for (int i = 2; i < v.size(); ++i)
    dp[i] = max(dp[i - 1], dp[i - 2] + v[i]);
  cout << dp[v.size() - 1];
}