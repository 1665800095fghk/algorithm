#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<int> v) {
  for (int i = 1; i < v.size(); ++i)
    if (v[i] < v[i - 1])
      return false;
  return true;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  for (int i = 0; i < v.size(); ++i) {
    v.push_back(v[0]);
    v.erase(v.begin());
    if (check(v)) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}