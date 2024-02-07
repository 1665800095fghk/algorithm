#include "bits/stdc++.h"

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < 3; ++i) {
    int a, b, res = 0, count = 0;
    cin >> a >> b;
    while (count < n)
      count += a, res += b;
    if (res < ans || ans == 0)
      ans = res;
  }
  cout << ans << endl;
}
