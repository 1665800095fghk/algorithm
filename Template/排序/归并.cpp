#include <bits/stdc++.h>
#define ll long long
using namespace std;

void merge_sort(vector<int> &v, int l, int r) {
  if (l >= r)
    return;
  // 1. 找到划分点
  int mid = l + (r - l) / 2;
  // 2. 递归
  merge_sort(v, l, mid), merge_sort(v, mid + 1, r);
  // 3. 归并
  int k = 0, i = l, j = mid + 1;
  vector<int> tmp(v.size());
  while (i <= mid && j <= r)
    if (v[i] < v[j])
      tmp[k++] = v[i++];
    else
      tmp[k++] = v[j++];
  while (i <= mid)
    tmp[k++] = v[i++];
  while (j <= r)
    tmp[k++] = v[j++];
  // 4. 将结果传回 v
  for (int i = l, j = 0; i <= r; i++, j++)
    v[i] = tmp[j];
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  merge_sort(v, 0, v.size() - 1);
  for (auto it : v) {
    cout << it << " ";
  }
}