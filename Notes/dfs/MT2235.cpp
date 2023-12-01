#include "bits/stdc++.h"

using namespace std;

int m, n;
int num = 5;
int res = 0;

void dfs(int x, int p, int num) {
  if (x < 0 || p < 0 || num < 0 || (p == 0 && x != 0))
    return;
  if (x == 0 && p == 0 && num == 0) {
    res++;
    return;
  }
  // stroe
  dfs(x - 1, p, num * 2);
  // friend
  dfs(x, p - 1, num - 2);
}

int main() {
  cin >> m >> n;
  dfs(m, n, num);
  cout << res << endl;
}
