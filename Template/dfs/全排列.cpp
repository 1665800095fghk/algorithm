#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n;        // 排列 1 ~ n
int vis[50];  // 数字是否使用
int a[50];    // 存放结果

void dfs(int step) {    // step 为当前是位数
  if (step == n + 1) {  // 生产了 n 位，输出返回
    for (int i = 1; i <= n; ++i) cout << setw(5) << a[i];
    cout << endl;
    return;
  }
  for (int i = 1; i <= n; ++i) {
    if (vis[i] == 0) {
      vis[i] = 1;
      a[step] = i;
      dfs(step + 1);
      vis[i] = 0;
    }
  }
}

int main() {
  cin >> n;
  dfs(1);
}