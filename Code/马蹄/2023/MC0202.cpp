#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, N;
  scanf("%d,%d", &n, &N);
  int ans = 0;
  for (int i = n; i <= N; ++i) {
    if (i % 2 == 0 && i % 3 == 0) {
      ans += i;
    }
  }
  cout << ans;
}