#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<string> v(n);
  for (auto &it : v)
    cin >> it;
  map<string, vector<int>> m;
  for (int i = 0; i < n; ++i) {
    m[v[i]].push_back(i + 1);
  }
  vector<pair<string, vector<int>>> ans(m.begin(), m.end());
  sort(ans.begin(), ans.end(),
       [](auto it_1, auto it_2) { return it_1.second[0] < it_2.second[0]; });
  for (auto it : ans) {
    cout << it.first << "(";
    for (int i = 0; i < it.second.size(); ++i)
      cout << it.second[i] << (i != it.second.size() - 1 ? ',' : ')');
  }
}