#include "bits/stdc++.h"

using namespace std;

int n, res = 0;

void dfs(int x) {
  if (x > n)
    return;
  if (x == n) {
    res++;
    return;
  }

  dfs(x + 1);
  dfs(x + 2);
}

int main() {
  cin >> n;
  dfs(0);
  cout << res << endl;
}
