#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    map<char, int> m;
    string str;
    cin >> str;
    for (auto it : str)
      m[it] = m[it] >= 1 ? m[it] + 1 : 1;
    bool flag = false;
    for (auto it : m)
      if (it.second == 3)
        flag = true;
    if (flag)
      cout << "Yes\n";
    else
      cout << "No\n";
  }
}