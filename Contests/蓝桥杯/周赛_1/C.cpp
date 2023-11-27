#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k;

bool check(vector<int> v, int mid) {
  int groups = 0;
  int prev = 0;
  for (int i = 1; i < n; ++i) {
    if (v[i] - v[prev] > mid) {
      groups++;
      prev = i;
    }
  }
  return (groups + 1 <= k);
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  sort(v.begin(), v.end());
  int l = 0, r = v.back() - v[0];
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (check(v, mid)) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  cout << l << endl;
}