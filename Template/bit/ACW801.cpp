#include <bits/stdc++.h>

using namespace std;

int lowbit(int n) { return n & -n; }

int main() {
  int n;
  cin >> n;
  while (n--) {
    int k, res = 0;
    cin >> k;
    while (k)
      k -= lowbit(k), res++;
    cout << res << " ";
  }
}
