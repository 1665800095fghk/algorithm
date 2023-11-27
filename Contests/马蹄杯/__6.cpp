#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n, l, cap, s;
  cin >> n >> l >> cap >> s;
  vector<pair<int, int>> v(n);
  for (auto &it : v)
    cin >> it.first >> it.second;
  sort(v.begin(), v.end(),
       [](auto it1, auto it2) { return it1.first < it2.first; });
  for(auto it : v) {
    
  }
}