#include <algorithm>
#include <iostream>
using namespace std;
int dp[110][110];
int main() {
  int T, n;
  cin >> T;
  while (T--) {
    cin >> n;
    for (int i = 0; i < n; i++)
      for (int j = 0; j <= i; j++)
        cin >> dp[i][j];
    for (int i = n - 2; i >= 0; i--)
      for (int j = 0; j <= i; j++)
        dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
    cout << dp[0][0] << endl;
  }
  return 0;
}