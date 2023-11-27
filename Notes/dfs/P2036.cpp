#include "bits/stdc++.h"

using namespace std;

struct Tmp {
  int s, b;
};

int n;
vector<Tmp> v;
vector<int> st;
int res = 1e9;

void dfs(int x) {
  if (x == n) {
    int sum_s = 1, sum_b = 0;
    // 题目说明至少选择一种调料，所以判断是否都为不选
    bool has_one = false;
    for (int i = 0; i < n; ++i) {
      if (st[i] == 1) {
        has_one = true;
        sum_s *= v[i].s, sum_b += v[i].b;
      }
    }
    if (has_one)
      res = min(res, abs(sum_s - sum_b));
    return;
  }

  // 选
  st[x] = 1;
  dfs(x + 1);
  st[x] = 0;

  // 不选
  st[x] = 2;
  dfs(x + 1);
  st[x] = 0;
}

int main() {
  cin >> n;
  v.resize(n), st.resize(n);
  for (auto &it : v)
    cin >> it.s >> it.b;
  dfs(0);
  cout << res;
}
