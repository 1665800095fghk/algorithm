#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct Store {
  int a, b;
  Store() {}
};

vector<int> dp(10000);

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<Store> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i].a;
  for (int i = 0; i < n; ++i)
    cin >> v[i].b;
  for (int i = n - 1; i >= 0; i--)
    dp[i] = max(dp[i + 1], v[i].b + dp[v[i].a + i + 1]);
  cout << dp[0] << endl;
}