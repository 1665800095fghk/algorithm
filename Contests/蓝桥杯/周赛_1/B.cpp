#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<int> v;
  v.push_back(1);
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j <= (2 << i); ++j) {
      v.push_back(j);
    }
  }

  // for (auto it : v)
  //   cout << it << " ";
  while (q--) {
    int ans = 1;
    string str;
    cin >> str;
    for (auto it : str) {
      if (it == 'L') {
        ans = ans * 2;
      } else {
        ans = ans * 2 + 1;
      }
    }
    cout << v[ans - 1] << endl;
  }
}