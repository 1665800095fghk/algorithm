#include <iostream>
#include <vector>
#define ll long long
using namespace std;

struct Bead {
  int w, d;
  Bead() {}
};

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<Bead> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i].w;
  for (int i = 0; i < n; ++i)
    cin >> v[i].d;
  vector<int> dp(10000);
  for (int i = 0; i < n; ++i)
    for (int j = m; j > v[i].w; j--)
      dp[j] = max(dp[j], dp[j - v[i].w] + v[i].d);
  cout << dp[m] << endl;
}