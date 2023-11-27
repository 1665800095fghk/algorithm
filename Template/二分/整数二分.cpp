#include <bits/stdc++.h>
#define ll long long
using namespace std;

int x;

namespace fghk {
bool check(vector<int> v, int mid) { return v[mid] >= x; }

int binary_search(vector<int> v) {
  int l = 0, r = v.size() - 1;
  while (l < r) {
    int mid = l + (r - l) / 2;
    if (check(v, mid)) {
      r = mid;
    } else {
      l = mid + 1;
    }
  }
  return v[l] == x ? l : -1;
}
} // namespace fghk

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n >> x;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  cout << fghk::binary_search(v) << " ";
}
