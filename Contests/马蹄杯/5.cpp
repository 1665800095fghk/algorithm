#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  int ans = 0, tmp = n;
  while (tmp != 0) {
    ans *= 10;
    ans += tmp % 10;
    tmp /= 10;
  }
  cout << ans << endl;
  cout << (ans >= n ? "True" : "False") << endl;
}