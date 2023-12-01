#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> t(4);
vector<vector<int>> dp(4, vector<int>(4, -1));

int solve(int i, int j) {
  if (dp[i][j] >= 0)
    return dp[i][j];
  return dp[i][j] =
             t[i][j] + (i == 3 ? 0 : max(solve(i + 1, j), solve(i + 1, j + 1)));
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  t = {{1}, {3, 2}, {4, 10, 1}, {4, 3, 2, 20}};
  cout << solve(0, 0);
}