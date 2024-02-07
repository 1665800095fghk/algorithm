#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> v(n), prev_arr(n);
  for (auto &it : v)
    cin >> it;
  prev_arr[0] = v[0];
  for (int i = 1; i < n; ++i)
    prev_arr[i] = prev_arr[i - 1] + v[i];
  while (m--) {
    int l, r;
    cin >> l >> r;
    cout << prev_arr[r - 1] - prev_arr[l - 2] << endl;
  }
}
