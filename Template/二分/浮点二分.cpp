#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  double x;
  cin >> x;
  double l = 0, r = x;
  // 精度比输出位数多2位保持输出精度
  while (r - l > 1e-8) {
    double mid = l + (r - l) / 2;
    if (mid * mid >= x)
      r = mid;
    else
      l = mid;
  }
  cout << l << endl;
}