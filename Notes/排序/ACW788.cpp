#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll merge_sort(vector<int> &v, int l, int r) {
  if (l >= r)
    return 0;
  int mid = (l + r) >> 1;
  ll res = merge_sort(v, l, mid) + merge_sort(v, mid + 1, r);
  int k = 0, i = l, j = mid + 1;
  vector<int> tmp(v.size());
  while (i <= mid && j <= r) {
    if (v[i] <= v[j])
      tmp[k++] = v[i++];
    else
      tmp[k++] = v[j++], res += mid - i + 1;
  }
  while (i <= mid)
    tmp[k++] = v[i++];
  while (j <= r)
    tmp[k++] = v[j++];

  for (int i = l, j = 0; i <= r; i++, j++)
    v[i] = tmp[j];
  return res;
}

int main() {
  std::ios::sync_with_stdio(false), cin.tie(0);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; ++i)
    cin >> v[i];
  cout << merge_sort(v, 0, n - 1) << endl;
}