#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> temp = {"1111111111", "1222222221", "1233333321", "1234444321",
                       "1234554321", "1234554321", "1234444321", "1233333321",
                       "1222222221", "1111111111"};

void solve(vector<string> v) {
  int ans = 0;
  for (int i = 0; i < 10; ++i)
    for (int j = 0; j < 10; ++j)
      if (v[i][j] == 'X')
        ans += temp[i][j] - '0';
  cout << ans << endl;
}

int main() {
  // std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    vector<string> v(10);
    for (int i = 0; i < 10; ++i)
      cin >> v[i];
    solve(v);
  }
}