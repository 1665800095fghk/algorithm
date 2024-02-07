#include "bits/stdc++.h"
#include <cstdio>

using namespace std;

int main() {
  double n;
  cin >> n;
  double l = -10000, r = 10000;
  while(r - l >  1e-7) {
    double mid = (l + r) / 2;
    if(mid * mid * mid >= n) r  = mid;
    else l = mid;
  }
  printf("%.6f", l);
}
