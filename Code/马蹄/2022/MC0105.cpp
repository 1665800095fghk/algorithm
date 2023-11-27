#include <bits/stdc++.h>
#define ll long long
using namespace std;

int c, d;

ll dict(int a, int b) {
  if (a == 1) {
    return (c * b + d) % 10;
  }
  return dict(a - 1, dict(a - 1, b));
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int a, b;
  cin >> a >> b >> c >> d;
  cout << dict(a, b);
}