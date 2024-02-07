#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b)
    cout << c;
  if (b == c)
    cout << a;
  if (c == a)
    cout << b;
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
