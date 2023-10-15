#include <bits/stdc++.h>
#define ll long long
using namespace std;

double a, b, c, d;

double fun(double x) { return a * x * x * x + b * x * x + c * x + d; }

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  double l, r, m, x1, x2;
  int s = 0, i;
  cin >> a >> b >> c >> d;
  for (i = -100; i < 100; i++) {
    l = i;
    r = i + 1;
    x1 = fun(l);
    x2 = fun(r);
    if (!x1) {
      printf("%.2lf ", l);
      s++;
    }
    if (x1 * x2 < 0) {
      while (r - l >= 0.001) {
        m = l + (r - l) / 2;
        if (fun(m) * fun(r) <= 0)
          l = m;
        else
          r = m;
      }
      printf("%.2lf ", r);
      s++;
    }
    if (s == 3)
      break;
  }
}