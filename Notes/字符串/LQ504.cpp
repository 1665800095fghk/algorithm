#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  string str;
  cin >> str;
  map<char, int> m;
  for (auto it : str)
    m[it] = m[it] >= 1 ? m[it] + 1 : 1;
  char mx = m.begin()->first;
  for (auto it : m) {
    if (it.second > m[mx])
      mx = it.first;
  }
  cout << mx << endl << m[mx] << endl;
}