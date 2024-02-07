#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int stk[N], tt;

int main() {
  int n, x;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> x;
    while (tt && stk[tt] >= x)
      tt--;
    if (tt)
      cout << stk[tt] << ' ';
    else
      cout << -1 << ' ';

    stk[++tt] = x;
  }
}
