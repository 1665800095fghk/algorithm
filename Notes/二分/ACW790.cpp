#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  double n;
  cin >> n;
  double l = -100, r = 100;
  while (r - l >= 1e-8) {
    double mid = l + (r - l) / 2.0;
    if (mid * mid * mid >= n)
      r = mid;
    else
      l = mid;
  }
  cout << l << endl;
}