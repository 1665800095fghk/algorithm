#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, cnt = 0;

void dfs(int step, ll sum) {
  if (step > n) {
    if (sum % k == 0)
      cnt++;
    return;
  }
  sum *= 10;
  for (int i = 1; i <= 6; i++)
    dfs(step + 1, sum + i);
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  cin >> n >> k;
  dfs(1, 0);
  cout << cnt << endl;
}