#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
  string str;
  cin >> str;
  int ansA = 0, ansB = 0;
  for (int i = 0; i < str.size(); i++) {
    // ABAB
    if (i % 2 == 0 && str[i] != 'B')
      ansA++;
    if (i % 2 == 1 && str[i] != 'A')
      ansA++;
    // BABA
    if (i % 2 == 0 && str[i] != 'A')
      ansB++;
    if (i % 2 == 1 && str[i] != 'B')
      ansB++;
  }
  cout << min(ansA, ansB) << endl;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--)
    solve();
}