#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int m, n;
  cin >> m >> n;
  int count = 1, ans = m;
  while (ans % 10 != n && ans % 10 != 0) {
    ans += m;
    count++;
  }
  cout << count << endl;
}