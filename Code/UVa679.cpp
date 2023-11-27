#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int Deep, Index;
  while (scanf("%d%d", &Deep, &Index) == 2) {
    vector<bool> v(1 << 20, false);
    int k, n = (1 << Deep) - 1;
    for (int i = 0; i < Index; ++i) {
      k = 1;
      while (true) {
        v[k] = !v[k];
        k = v[k] ? k * 2 : k * 2 + 1;
        if (k > n)
          break;
      }
    }
    cout << k / 2 << endl;
  }
}