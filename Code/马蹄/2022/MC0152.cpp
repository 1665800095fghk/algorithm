#include <bits/stdc++.h>
#include <tuple>
#define ll long long
using namespace std;

struct Tmp {
  string s;
  int n;
};

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<Tmp> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i].s >> v[i].n;
  int q;
  cin >> q;
  while (q--) {
    int x, p;
    cin >> x >> p;
    while (p--) {
      for (auto it : v) {
        if (it.s == "ADD")
          x = (x + it.n) % 10007;
        else
          x = (x * it.n) % 10007;
      }
    }
    cout << x << endl;
  }
}