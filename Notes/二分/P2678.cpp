#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m;

bool check(vector<int> v, int x) {
  int tot = 0;
  int i = 0;
  int now = 0;
  while (i < n + 1) {
    i++;
    if (v[i] - v[now] < x)
      tot++;
    else
      now = i;
  }
  if (tot > m)
    return false;
  else
    return true;
}

int main() {    
  std::ios::sync_with_stdio(false), cin.tie(0);
  int len;
  cin >> len >> n >> m;
  vector<int> d(n + 2, 0);
  for (int i = 1; i <= n; ++i)
    cin >> d[i];
  d[n + 1] = len;

  int l = 1, r = len, ans;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (check(d, mid)) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  cout << ans << endl;
}