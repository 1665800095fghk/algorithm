#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
  for (int i = 0; i < n; ++i)
    cout << i * 2 + 1 << " ";
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }
}