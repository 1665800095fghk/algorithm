#include "bits/stdc++.h"
#include <algorithm>

using namespace std;

int n, a, b;
vector<int> v;
map<int, int> st;
int res = 1e9;

// x-次数, now-当前层数
void dfs(int x, int now) {
  if (x >= res)
    return;
  if (now == b) {
    res = min(res, x);
    return;
  }
  // 上
  if (now + v[now] <= n && !st[now + v[now]]) {
    st[now + v[now]] = true;
    dfs(x + 1, now + v[now]);
    st[now + v[now]] = false;
  }

  // 下
  if (now - v[now] <= n && !st[now - v[now]]) {
    st[now - v[now]] = true;
    dfs(x + 1, now - v[now]);
    st[now - v[now]] = false;
  }
}

int main() {
  cin >> n >> a >> b;
  v.resize(n);
  a -= 1, b -= 1;
  for (auto &it : v)
    cin >> it;
  for (auto it : v)
    st[it] = 0;
  dfs(0, a);
  if (res == 1e9)
    cout << -1;
  else
    cout << res;
}
