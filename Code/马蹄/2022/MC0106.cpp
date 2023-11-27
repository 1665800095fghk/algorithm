#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  int nn = n * n;
  vector<int> v(nn, 0);
  string str;
  cin >> str;
  for (auto ch : str) {
    for (int i = nn - 1; i >= 0; --i) {
      if (v[i] == 1) {
        v[i + 1] = 1;
        v[i] = 0;
      }
    }
    if (ch == '1')
      v[0] = 1;
    int count = 0;
    for (int i = 0; i < n; ++i) {
      bool flag = false;
      for (int j = 0; j < n; ++j) {
        if (v[i * n + j] == 1) {
          flag = true;
          break;
        }
      }
      if (flag)
        count++;
    }
    cout << count << " ";
  }
}