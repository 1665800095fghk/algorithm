#include "bits/stdc++.h"

using namespace std;

int n;
vector<vector<int>> v;
vector<vector<int>> dp;

int solve(int i, int j) {
  if (dp[i][j] >= 0)
    return dp[i][j];
  return v[i][j] + (i == n - 1 ? 0 : max(solve(i + 1, j), solve(i + 1, j + 1)));
}

int main() {
  cin >> n;
  dp.resize(n);
  for (int i = 0; i < n; ++i) {
    dp[i].resize(i + 1, -1);
    vector<int> t;
    for (int j = 0; j < i + 1; ++j) {
      int tmp;
      cin >> tmp;
      t.push_back(tmp);
    }
    v.push_back(t);
  }
  cout << solve(0, 0) << endl;
}
