#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, m, x, y, k;
  vector<vector<int>> v;
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> n >> m >> x >> y >> k;
  v.resize(n, vector<int>(m, 0));
  x--, y--;
  for (int i = 0; i < k; ++i) {
    int a, b;
    cin >> a >> b;
    v[a - 1][b - 1] = 1;
  }
  // for (auto it : v) {
  //   for (auto item : it) {
  //     cout << item << " ";
  //   }
  //   cout << endl;
  // }
  string str;
  cin >> str;
  for (char move : str) {
    int dx = 0, dy = 0;
    switch (move) {
    case 'L':
      dy = -1;
      break;
    case 'R':
      dy = 1;
      break;
    case 'U':
      dx = -1;
      break;
    case 'D':
      dx = 1;
      break;
    }

    while (x + dx >= 0 && x + dx < n && y + dy >= 0 && y + dy < m &&
           !v[x + dx][y + dy]) {
      x += dx;
      y += dy;
    }
  }

  cout << x + 1 << " " << y + 1 << endl;
  return 0;
}