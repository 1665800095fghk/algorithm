#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;
char c;
vector<vector<char>> v;

bool check(int i, int j) {
  if (i + 1 < m && v[i + 1][j] == c || i - 1 < m && v[i - 1][j] == c ||
      j + 1 < m && v[i][j + 1] == c || j - 1 < m && v[i][j - 1] == c)
    return true;
  return false;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> m >> n >> c;
  v.resize(m, vector<char>(n));
  for (auto &iter : v)
    for (auto &it : iter)
      cin >> it;
  // set<pair<int, int>> s;
  int count = 0;
  for (int i = 0; i < m; ++i) {
    for (int j = 0; j < n; ++j) {
      if (v[i][j] != c && v[i][j] != '0') {
        if (check(i, j))
          count++;
      }
    }
  }
  cout << count << endl;
  // for (auto it : s) {
  //   cout << it.first << it.second << endl;
  // }
}