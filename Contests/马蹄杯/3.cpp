#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  string s;
  char c;
  cin >> s >> c;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == c) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}