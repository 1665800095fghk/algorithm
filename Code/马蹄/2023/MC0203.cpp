#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  unordered_map<string, int> m;
  while (n--) {
    string s;
    int score;
    cin >> s >> score;
    m[s] += score;
  }
  for (auto &it : m)
    it.second += 1000;

  // for (auto it : m) {
  //   if (it.second < min.second) {
  //     min = it;
  //   }
  // }

  vector<pair<string, int>> v(m.begin(), m.end());
  sort(v.begin(), v.end(),
       [](auto it_1, auto it_2) { return it_1.second < it_2.second; });
  cout << v[0].first << endl << v[0].second << endl;
}