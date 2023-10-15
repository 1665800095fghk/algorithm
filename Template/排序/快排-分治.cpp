#include <bits/stdc++.h>
#define ll long long
using namespace std;

void quick_sort(vector<int> &v, int l, int r) {
  if (l >= r)
    return;
  // 1. 确定分界点 x(q[l], q[r], q[(l+r)/2])
  int x = v[l], i = l - 1, j = r + 1;
  // 2. 使得左侧的数小于 x，右侧的数大于 x
  while (i < j) {
    do
      i++;
    while (v[i] < x);
    do
      j--;
    while (v[j] > x);
    if (i < j)
      swap(v[i], v[j]);
  }
  // 3. 递归处理左右
  quick_sort(v, l, j);
  quick_sort(v, j + 1, r);
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  quick_sort(v, 0, v.size() - 1);
  for (auto it : v) {
    cout << it << " ";
  }
}