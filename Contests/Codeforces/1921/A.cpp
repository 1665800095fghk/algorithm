#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<pair<int, int>> v(4);
    for (auto &it : v)
      cin >> it.first >> it.second;
    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {
      return p1.first < p2.first;
    });
    int width = abs(v[0].second - v[1].second);
    sort(v.begin(), v.end(), [](pair<int, int> p1, pair<int, int> p2) {
      return p1.second < p2.second;
    });
    int height = abs(v[0].first - v[1].first);
    cout << width * height << endl;
  }
}
