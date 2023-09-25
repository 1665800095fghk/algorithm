#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n, m, arr[103];

void dfs(int n, int i, int a) {
  if (n == 0) {
    for (int j = 1; j <= i - 1; ++j) std::cout << arr[j] << " ";
    std::cout << endl;
  }
  if (i <= m) {
    for (int j = a; j <= n; ++j) {
      arr[i] = j;
      dfs(n - j, i + 1, j);
    }
  }
}
int main() {
  std::cin >> n >> m;
  dfs(n, 1, 1);
}