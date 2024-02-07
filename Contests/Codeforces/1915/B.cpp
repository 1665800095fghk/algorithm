#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

void solve() {
  string str;
  for (int i = 0; i < 3; ++i) {
    cin >> str;
    if (*find(str.begin(), str.end(), '?') == '?') {
      for (auto it : "ABC") {
        if (*find(str.begin(), str.end(), it) != it) {
          cout << it << endl;
        }
      }
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
