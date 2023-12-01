#include "bits/stdc++.h"

using namespace std;

struct Store {
  int a, b;
};

int main() {
  int n;
  cin >> n;
  vector<Store> v(n);
  vector<int> dp(100000);
  for (auto &it : v)
    cin >> it.a;
  for (auto &it : v)
    cin >> it.b;
  for (int i = n - 1; i >= 0; --i)
    dp[i] = max(dp[i + 1], v[i].b + dp[v[i].a + i + 1]);
  cout << dp[0] << endl;
}
