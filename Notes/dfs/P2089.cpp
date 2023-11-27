#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int n;
int num[50];
vector<vector<int>> v;
int res = 0;

void dfs(int step, int x) {
  // 减枝
  if (x > n)
    return;
  if (x == n && step > 10) {
    for (int i = 1; i <= 10; ++i)
      v[res][i - 1] = num[i];
    res++;
    return;
  }
  for (int i = 1; i <= 3; i++) {
    num[step] = i;
    dfs(step + 1, x + i);
    num[step] = 0;
  }
}

int main() {
  cin >> n;
  v.resize(n, vector<int>(10));
  dfs(1, 0);
  for (auto its : v) {
    for (auto it : its) {
      cout << setw(2) << it;
    }
    cout << endl;
  }
}
