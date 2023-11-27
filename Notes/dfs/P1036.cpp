#include "bits/stdc++.h"
#include <cmath>
#include <iomanip>

using namespace std;

int n, k;
vector<int> v;
int res = 0;

bool check(int n) {
  for (int i = 2; i * i <= n; ++i)
    if (n % i == 0)
      return false;
  return true;
}

void dfs(int x, int sum, int startx) {
  if (x > k) {
    if (check(sum))
      res++;
    return;
  }
  // 使用 startx 省略前面的数，达到去重的效果
  for (int i = startx; i < n; ++i)
    dfs(x + 1, sum + v[i], i + 1);
}

int main() {
  cin >> n >> k;
  v.resize(n);
  for (auto &it : v)
    cin >> it;
  dfs(1, 0, 0);
  cout << res;
}
