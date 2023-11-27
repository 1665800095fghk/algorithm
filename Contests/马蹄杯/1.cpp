#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  int ans = 1, sum = 1;
  for (int i = 2; i <= n; ++i) {
    ans += i;
    sum += ans;
  }
  cout << sum << endl;
}