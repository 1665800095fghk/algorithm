#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  double x;
  cin >> x;
  int ans = 0;
  if (x < 10) {
    cout << x;
    return 0;
  }
  while (x >= 10) {
    x /= 10;
    ans++;
  }
  cout << x << "E" << ans << endl;
}