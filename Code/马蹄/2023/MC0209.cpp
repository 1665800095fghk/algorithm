#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  string p;
  cin >> p;
  if (p.size() % 2 == 1)
    cout << 123456 << endl;
  else {
    int n = p.size() / 2;
    int l = n, r = p.size() - 1;
    while (l < r) {
      swap(p[l++], p[r--]);
    }
    cout << p << endl;
  }
}